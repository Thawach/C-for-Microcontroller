
#include<stdio.h>
#include<stdint.h>
#include<xc.h>

int main(void)
{
    
 /*   x = 0xFF & 0x0F;
    y = 0x1E;
    z = 0x5A;
    // 1111 1111
    // 0000 1111 
    // 0000 1111*/
    
  /*  printf("x = 0x%X\r\n", x);
    printf("x = 0x%4X\r\n", x);
    printf("x = 0x%.4X\r\n", x);*/
    // 0x0F
    //0x000F
    
   /* z = x & 0x05;
    printf("z = 0x%.4X\r\n", z);
    printf("x^0xFF = 0x%.4X\r\n", x^0xFF);
    printf("~z = 0x%.4X\r\n", ~z);*/
    
   /* y = 0x05;
    z = 0xAB;
    
    x = 0x12 | y;
    x = ~y;
    x = 0xF1^z;
    x = ((~y)&0x0F)^0xFF;*/
    
 /*   x = 1 << 2;
    y = 3 >> 0;
    z = 2;
    
    y = 4;
    x = 7 << y;
    x = y << z;
    
    x = (1<<5) | (1<<2);
    
    //RB0, RB8, RB14 == input;
    TRISB = 0x0000;
    x = TRISB;
    x = x | ((1<<0) | (1<<8) | (1<<14));
    TRISB = x;
    
    // RB0, RB14 == output;
    x = TRISB;
    x = x & ~((1<<0) | (1<<14));
    TRISB = x;
    
    x = TRISB;
    y = ((1<<0)|(1<<14));
    z = ~y;
    y = x&z;
    x = y;
    
    TRISB =x;
    TRISB = TRISB | ((1<<0)|(1<<8)|(1<<14));
    TRISB = TRISB & ~((1<<0)|(1<<14));
    */
    uint16_t x ,y ,z = 0x01;
    x = 12;
    y = 0x01;
    y = y;
    
    
    
    // +=
    
    x +=5; // x = x + 5 
    y +=x; // y = y + 5
    
    // %=
    
    z %= 5; // z = z % 5
    
    // <<=
    
    x <<= y; // x = x << y
    z <<= 3; // z = z << 3
    
    // ^= 
    
    y ^= 0xF0; // y = y ^ 0x0F;
    x ^= z; // x = x ^ z;
    
    while(1);
}