#include<reg52.h>
sbit LED = P2^0;
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