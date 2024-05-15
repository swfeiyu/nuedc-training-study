#include "server.h"

/*
 *	��������ļ�
 */

void TIM8_PWM_Init(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
 	TIM_TimeBaseInitTypeDef  TIM_TimeBaseStructure;
	TIM_OCInitTypeDef  TIM_OCInitStructure;
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM8,ENABLE);	// ������ʱ��ʱ��,���ڲ�ʱ��CK_INT=72M

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);
  GPIO_InitStructure.GPIO_Pin =  GPIO_Pin_6;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;//��������ٶ�
  GPIO_Init(GPIOC, &GPIO_InitStructure);//��ʼ��GPIOC_Pin_9
	 
	TIM_TimeBaseStructure.TIM_Period= (200-1);							 //�Զ���װ�ؼĴ�����ֵ���ۼ�TIM_Period+1��Ƶ�ʺ����һ�����»����ж�
	TIM_TimeBaseStructure.TIM_Prescaler= (7200-1);					 //����CNT��������ʱ�� = Fck_int/(psc+1)
	TIM_TimeBaseStructure.TIM_ClockDivision=TIM_CKD_DIV1;		 //ʱ�ӷ�Ƶ���� ��������������ʱ�䣬û�õ�������
	TIM_TimeBaseStructure.TIM_CounterMode=TIM_CounterMode_Up;//����������ģʽ������Ϊ���ϼ���
	TIM_TimeBaseStructure.TIM_RepetitionCounter=0;					 //�ظ���������ֵ��û�õ���������������
	TIM_TimeBaseInit(TIM8, &TIM_TimeBaseStructure);					 //��ʼ����ʱ��
	
	TIM_OCInitStructure.TIM_OCMode = TIM_OCMode_PWM1;						 //����ΪPWMģʽ1
	TIM_OCInitStructure.TIM_OutputState = TIM_OutputState_Enable;//���ʹ��
	TIM_OCInitStructure.TIM_Pulse = 0;													 //����ռ�ձȴ�С����������compare��������һ��
	TIM_OCInitStructure.TIM_OCPolarity = TIM_OCPolarity_High;		 //���ͨ����ƽ��������
	TIM_OCInitStructure.TIM_OCIdleState = TIM_OCIdleState_Set;	 //���ͨ�����е�ƽ��������
	TIM_OC1Init(TIM8, &TIM_OCInitStructure);			   						 //��ʼ��ͨ��1
	TIM_OC1PreloadConfig(TIM8, TIM_OCPreload_Enable);						 //ʹ��ͨ��1���
	
	TIM_Cmd(TIM8, ENABLE);						//ʹ�ܼ�����
	TIM_CtrlPWMOutputs(TIM8, ENABLE);	// �����ʹ�ܣ���ʹ�õ���ͨ�ö�ʱ��ʱ����䲻��Ҫ
}

