#include <reg51.h>
#define MACHINE_FREQUENCY 7000 

unsigned int arr[10] = {
  0xC0, //0
  0xF9,  //1
  0xA4, //2
  0xB0, //3
  0x99, //4
  0x92, //5
  0x82, //6
  0xF8, //7
  0x80, //8
  0x90  //9
};

sbit d6 = P1 ^ 0;
sbit d5 = P1 ^ 1;
sbit d4 = P1 ^ 2;
sbit d3 = P1 ^ 3;
sbit d2 = P1 ^ 4;
sbit d1 = P1 ^ 5;

unsigned int v1, v2, v3, v4, v5, v6, timer;

void main() {
  v1 = v2 = v3 = v4 = v5 = v6 = 0;
	
  while (1) {
    {

      if (timer == MACHINE_FREQUENCY) {
        timer = 0;
        v1 = v1 + 1;
      }

      P2 = 0xFF;	
      d1 = 1;
      d2 = d3 = d4 = d5 = d6 = 0;
      P2 = arr[v1];
   

      if (v1 == 10) {
        v1 = 0;
        v2 = v2 + 1;
      }
      P2 = 0xFF;
      d2 = 1;
      d1 = d3 = d4 = d5 = d6 = 0;
      P2 = arr[v2];


      if (v2 == 6) {
        v2 = 0;
        v3 = v3 + 1;
      }
      P2 = 0xFF;
      d3 = 1;
      d1 = d2 = d4 = d5 = d6 = 0;
      P2 = arr[v3];
   

      if (v3 == 10) {
        v3 = 0;
        v4 = v4 + 1;
      }
      P2 = 0xFF;
      d4 = 1;
      d1 = d2 = d3 = d5 = d6 = 0;
      P2 = arr[v4];
 

      if (v4 == 6) {
        v4 = 0;
        v5 = v5 + 1;
      }
      P2 = 0xFF;
      d5 = 1;
      d1 = d2 = d3 = d4 = d6 = 0;
      P2 = arr[v5];

      if (v5 == 10) {
        v5 = 0;
        v6 = v6 + 1;
      }

      P2 = 0xFF;
      d6 = 1;
      d1 = d2 = d3 = d4 = d5 = 0;
      P2 = arr[v6];

      if (v6 == 1 && v5 == 3) {
        v1 = 0;
        v2 = 0;
        v3 = 0;
        v4 = 0;
        v5 = 1;
        v6 = 0;
      }

      timer++;
    }
  }
}