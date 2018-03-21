#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *my_strncpy(char *dest , char const *src , int n)
{
    char *p=dest;
    while(*src!='\0'&&n--)
    {
        *dest=*src;
        src++;dest++;
    }
    if(n>0)
        *dest='\0';
    dest=p;
    return p;
}

void my_putchar(char *s)
{
    write(1, s, strlen(s));
}


