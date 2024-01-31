#include<reg51.h>

sbit tl1r = P2^0;      // red
sbit tl1o = P2^1;      // orange
sbit tl1g = P2^2;      // green

void delay(int t);          
void trafficlight(void);
void main()                 
{                 
	P2=0x00;            
	
  while(1)
     {
	trafficlight();	
     }

}
void delay(unsigned long int t)      
{
	while(t>0)
	{
	unsigned long int i;
	for(i=1;i<10*1275;i++);
		t--;
	}
}
void trafficlight(void)   
{
	
tl1r=1; 
tl1o=0;	
tl1g=0;

delay(100);
	
tl1r=0; 
tl1o=1;	
tl1g=0;

delay(100);
	
tl1r=0; 
tl1o=0;	
tl1g=1;

delay(100);
}