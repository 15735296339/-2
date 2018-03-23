#include <stdio.h>

int my_str_isalpha ( char const * str )
{
    char *p=str;
    while(*p!='\0')
    {
        if(!(*p>='a'&&*p<='z')&&!(*p>='A'&&*p<='Z'))
            return 0;
        p++;
    }
    return 1;
}

