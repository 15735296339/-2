
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int my_str_isprintable ( char const * str )
{
    char *p=str;
    while(*p!='\0')
    {
        if (*p < 32 || *p > 127)
        {
            return 0;
        }
        p++;
    }
    return 1;
}

