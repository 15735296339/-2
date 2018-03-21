#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>


int my_str_isprintable ( char const * str )
{
    const char *p=str;
    while(*p!='\0')
    {
        if(!isprint(*p))
            return 0;
        p++;
    }
    return 1;
}

void my_putchar(char *s)
{
    write(1, s, strlen(s));
}

