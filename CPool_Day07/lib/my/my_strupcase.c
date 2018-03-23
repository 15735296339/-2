#include <stdio.h>
#include <string.h>
#include <unistd.h>
char *my_strupcase ( char * str )
{
    char *p=str;
    while(*p!='\0')
    {
        if(*p>='a'&&*p<='z')
            *p-=32;
        p++;
    }
    return str;
}

void my_putchar(char *s)
{
    write(1, s, strlen(s));
}



