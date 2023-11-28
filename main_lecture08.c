#include<float.h>
#include<math.h>
#include<stdio.h>
int main(void)
{
    /*
    int16_t x, y, z;
    x = 2;
    y = 4;
    z = x + y;
    
    printf("x + y = %d\r\n", z);
    printf("x - y = %d\r\n", (x-y));
    printf("x * y = %d\r\n", (x*y));
    printf("z / y = %d\r\n", (z/y));
    printf("z %% x = %d\r\n", (z%x));
    
    printf("x++ = %d\r\n", x++);
    printf("--y = %d\r\n", --y);
    printf("(x++) + (--y) = %d\r\n", (x++) + (--y));
    

    
    printf("x==2:   %d\r\n", x ==2);
    printf("x!=z:   %d\r\n", x !=z);
    printf("y>z:    %d\r\n", y >z);
    printf("x<z:    %d\r\n", x <z);
    printf("z> 0x0F:   %d\r\n", z>0x0F);
    printf("y<=0b1000:    %d\r\n", y <= 0b1000);
    
    if(y >= x)
    {
        printf("y >= x\r\n");
    }
    
    if( (y %2) == x)
    {
        printf("y %% 2 == x\r\n");
    }
    
   
    
    for(y = 0; y<=5; ++y)
    {
        printf("y = %d\r\n", y);
    }
    for(y = 0; y<=5; y++)
    {
        printf("y = %d\r\n", y);
    }
    
    
    
    
    while(z!=0){
        printf("z = %d\r\n", z);
        z--;
    }
    
    while(--y >=0){
        printf("y = %d\r\n", y);
        z--;
    }
    
    x = 1;
    for(; x < 0 ;)
    {
        printf("x = %d\r\n", x);
        x++;
    }
    
    if(y<5){
        y = 20;
    }
    else {
        y = 97;
    }
    
    y = (y <5) ? 20 :97;
            
    
    for(;;){ } // while(1)
    */
    
    int16_t x, y, z;
    x = 5;
    y = 0b1000;
    z = 0x53;
    
    if( x >= 5 && y < 8 || z > 0x50)
    {
        printf("Yes 1\r\n");
    }
    
    if(0 == x || y != x)
    {
        printf("Yes 2\r\n");
    }
    
    if ( !(y>x) )
    {
        printf("Yes 3\r\n");
    }
    
    if (x){ // x !=0
        printf("Yes 4\r\n");
    }
    if (x && y){ //x !=0 && y != 0
        printf("Yes 5\r\n");
    }
    if (x || y){ //x !=0 || y != 0
        printf("Yes 6\r\n");
    }
    
    if((!x && !y) || z > 5){
        printf("Yes 7\r\n");
    }
    
    while(1);
}
