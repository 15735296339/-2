#include <stdio.h>

int get_color ( unsigned char red , unsigned char green , unsigned char blue)
{
    unsigned int res;
    res=(red<<16)|(green<<8)|blue;
    return res;
}

//测试
int main()
{
    unsigned char a=0x11,b=0xFF, c=0xAA;
    printf("%X\n", get_color(a, b, c));
}

