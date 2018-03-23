#include <stdio.h>
char *my_strcpy(char *dest , char const * src )
{
    char *p=dest;
    while(*src!='\0')
    {
        *dest=*src;
        src++;dest++;
    }
    *dest='\0';
    return *p;
}

