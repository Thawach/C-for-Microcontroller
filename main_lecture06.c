#include<stdio.h>
#include<stdint.h>


void test()
{
    int16_t x = 0;
    int16_t za = 0;
    
    register int16_t y = 0;
    register int16_t zb = 0;
    
    for(x=0; x<500; x++){
        za++;
    }
    
    for(y=0; y<500; y++){
        zb--;
    }
}

int main(void)
{
    while(1)
    {
        test();
    }
}

//
//uint8_t v1  = 0x12;
//uint8_t v2 = 0x34;
//uint16_t v3 = 0xAB56;
//uint32_t v4 = 0x12345678;
//printf("address of V1: 0x%p\r\n", &v1);
//printf("address of V2: 0x%p\r\n", &v2);
//printf("address of V3: 0x%p\r\n", &v3);
//printf("address of V4: 0x%p\r\n", &v4);

//float vf = 22.0f/7.0f;
//double vd = 22.0/7.0;
//
//printf("float --> value: %f, size: %d, address: 0x%p\r\n", (double)vf, sizeof(vf), &vf);
////   printf("value: %e, size: %d, address: 0x%p\r\n", (double)vf, sizeof(vf), &vf);
////   printf("value: %E, size: %d, address: 0x%p\r\n", (double)vf, sizeof(vf), &vf);
//printf("double --> value: %f, size: %d, address: 0x%p\r\n", (double)vd, sizeof(vd), &vd);

//int32_t v1 = 120;
//
////Print value of v1
//printf("value: %ld\r\n", v1);
//
////Print size of v1
//printf("size: %d bits\r\n", sizeof(v1)*8);
//
//printf("address: 0x%p\r\n", &v1);
//printf("address: 0x%x\r\n", (uint16_t)&v1);
//printf("address: 0x%X\r\n", (unsigned int)&v1);