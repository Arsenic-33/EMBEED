
#include "mbed.h"
DigitalOut gpo(PTD7);
AnalogOut Aout(PTE30);
float x; 
unsigned int i,j;

int main() {
   x=0;
   i=0;
   while(1) {
      gpo=i & 1;
      x=16*2047.0*(1+sin(2*3.142*i/64));
      j=x; 
      Aout.write_u16(j);
      i++; 
   } 
}


