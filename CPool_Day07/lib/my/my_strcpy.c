#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *my_strcpy(char *dest , char const * src )
{
    char *p=dest;
    while(*src!='\0')
    {
        *dest=*src;
        src++;dest++;
    }
    *dest='\0';
    return p;
}

void my_putchar(char *s)
{
    write(1, s, strlen(s));
}


