#include "stm32f10x.h"
#include "Delay.h"
#include "Servo.h"
#include "Serial.h"
#include "OLED.h"
float Angle;
uint8_t get_data;
uint8_t RxData;

int main(void)
{
	Serial_Init();
	Servo_Init();
	OLED_Init();

	while(1)
	{
		
    if(Serial_GetRxFlag()==1)
		{
			OLED_ShowString(1,1,"6666");
			get_data=Serial_GetRxData();
	    if(get_data=='1')
        OLED_ShowString(1,1,"1111");
			else if(get_data=='0')
				OLED_ShowString(1,1,"2222");
		}
	}
	while (1)
	{
		Servo_SetAngle(Angle);
    if(Serial_GetRxFlag()==1)
		{
	    if(Serial_GetRxData()=='1')
		  	Angle=75;
			else if(Serial_GetRxData()=='0')
				Angle=105;
		}
	} 
}
