#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *my_strlowcase ( char * str )
{
    char *p=str;
    while(*p!='\0')
    {
        if(*p>='A'&&*p<='Z')
            *p+=32;
        p++;
    }
    return str;
}


void my_putchar(char *s)
{
    write(1, s, strlen(s));
}




