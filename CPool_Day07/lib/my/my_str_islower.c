
#include <stdio.h>


int my_str_islower ( char const * str )
{
    char *p=str;
    while(*p!='\0')
    {
        if(!(*p>='a'&&*p<='z'))
            return 0;
        p++;
    }
    return 1;
}

