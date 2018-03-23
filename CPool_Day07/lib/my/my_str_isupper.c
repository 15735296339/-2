
#include <stdio.h>

int my_str_isupper ( char const * str )
{
    char *p=str;
    while(*p!='\0')
    {
        if(!(*p>='A'&&*p<='Z'))
            return 0;
        p++;
    }
    return 1;
}

