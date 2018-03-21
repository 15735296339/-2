#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *my_revstr( char * str )
{
    char *dest=str;
    char* p = str + strlen(str)-1;
    char temp;
    while(str<p)
    {
        temp=*p;
        *p--=*str;
        *str++=temp;
    }
    str=dest;
    return str;
}

void my_putchar(char *s)
{
    write(1, s, strlen(s));
}

