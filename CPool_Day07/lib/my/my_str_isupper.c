#include <stdio.h>
#include <string.h>
#include <unistd.h>

int my_str_isupper ( char const * str )
{
    const char *p=str;
    while(*p!='\0')
    {
        if(!(*p>='A'&&*p<='Z'))
            return 0;
        p++;
    }
    return 1;
}

void my_putchar(char *s)
{
    write(1, s, strlen(s));
}



