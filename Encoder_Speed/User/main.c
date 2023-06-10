#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "LED.h"
#include "WeiDai.h"
#include "OLED.h"
#include "Encoder.h"
int main()
{
	Encoder_Init();
	LED_Init();
	OLED_Init();
	OLED_ShowString(1,1,"CNT:");
	while(1)
	{
		OLED_ShowSignedNum(1,5,Encoder_Get(),5);
		Delay_ms(1000);
		
	}
}
