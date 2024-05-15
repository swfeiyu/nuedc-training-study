/***********************************************************************
 * 使用舵机库
 * 舵机在180°内自动往返旋转
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, in version 3.
 * learn more you can see <http://www.gnu.org/licenses/>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.
 *
 *
 */
#include <Servo.h>  //调用舵机库
   Servo myservo;  // 定义舵机对象
   int pos = 0;    // 定义舵机转动位置
   void setup()
   {
      myservo.attach(7);  // 设置舵机控制针脚接数字7引脚
   }
   void loop()
  {
      // 0到180旋转舵机，每次延时5毫秒
      for(pos = 0; pos < 180; pos += 1)  
     {  
        myservo.write(pos);  
        delay(5);
      }
      // 180到0旋转舵机，每次延时15毫秒
      for(pos = 180; pos>=1; pos-=1)
      {                              
        myservo.write(pos);
        delay(5);
      }
  }
