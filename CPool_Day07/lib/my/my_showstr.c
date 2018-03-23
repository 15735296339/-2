#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

void my_putchar(char c);

int my_showstr(char const *p)
{
    while(*p!='\0')
    {
        if(isprint(*p))
           my_putchar(*p);
        else
        {
            my_putchar('\\');
            my_putchar('0');
            printf("%x", *p);
        }
        p++;
    }
    return 0;
}

