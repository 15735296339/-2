#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int my_strlen ( char const * str )
{
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    return len;
}


void my_putchar(char *s)
{
    write(1, s, my_strlen(s));
}

char * my_strcat(char *dest , char const *src)
{
    char *start = dest;
    int len_dest = my_strlen(dest);
    dest+=len_dest;
    while (*dest++ = *src++);
    return start;
}

