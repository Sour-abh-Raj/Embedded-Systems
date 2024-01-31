#include<reg52.h>
sbit LED1 = P2^0;
sbit LED2 = P2^1;
sbit LED3 = P2^2;
sbit LED4 = P2^3;
sbit LED5 = P2^4;
sbit LED6 = P2^5;
sbit LED7 = P2^6;
sbit LED8 = P2^7;

void delay(void);
void main(void){
   while(1){
      LED=0;
      delay();
	  LED=1;
	 delay();
	 }
}
void delay(void){
int i;
for(i=0;i<20000;i++)
	{
		
	}
}