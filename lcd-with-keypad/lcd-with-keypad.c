#include<reg51.h>
// https://www.youtube.com/watch?v=khfWdwtGQ7U

// 4X3 Keypad
sbit r1=P1^0;
sbit r2=P1^1;
sbit r3=P1^2;
sbit r4=P1^3;
sbit c1=P1^4;
sbit c2=P1^5;
sbit c3=P1^6;

sbit rs=P3^0;
sbit rw=P3^1;
sbit en=P3^2;
sfr lcd=0Xa0;

void lcdcmd (unsigned char);
void lcddat (unsigned char);

void delay();
void lcddelay();

void main()
{ 
P2=0x00;
lcdcmd(0x38); 
delay();
lcdcmd(0x06); //Blinking cursor
delay();
lcdcmd(0x81);
delay();

while(1)
{
r1=0;
if(c1==0)
{
lcddat('1');
delay();
lcddelay();
}
if(c2==0)
{
lcddat('2');
delay();
lcddelay();
}
if(c3==0)
{
lcddat('3');
delay();
lcddelay();
}
r1=1;
r2=0;
if(c1==0)
{
lcddat('4');
delay();
lcddelay();
}
if(c2==0)
{
lcddat('5');
delay();
lcddelay();
}
if(c3==0)
{
lcddat('6');
delay();
lcddelay();
}
r2=1;
r3=0;
if(c1==0)
{
lcddat('7');
delay();
lcddelay();
}
if(c2==0)
{
lcddat('8');
delay();
lcddelay();
}
if(c3==0)
{
lcddat('9');
delay();
lcddelay();
}
r3=0;
r4=0;
if(c1==0)
{
lcddat('*');
delay();
lcddelay();
}
if(c2==0)
{
lcddat('0');
delay();
lcddelay();
}
if(c3==0)
{
lcddat('#');
delay();
lcddelay();
}
r4=1;
}

void lcdcmd(unsigned char val)
{
P2=val;
rs=0;
rw=0;
en=1;
delay();
en=0;
}

void lcddat(unsigned char dat)
{
P2=dat;
rs=1;
rw=0;
en=1;
delay();
en=0;
}

void delay()
{
unsigned int i;
for (i=0; i<10000;i++);
}

void lcddelay()
{
	unsigned int j,k;
for(j=0;j<200;j++)
for(k=0;k<2000;j++);
}