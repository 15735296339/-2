

#include <stdio.h>
int my_str_isnum ( char const * str )
{
    char *p=str;
    while(*p!='\0')
    {
        if(!(*p>='0'&&*p<='9'))
            return 0;
        p++;
    }
    return 1;
}

