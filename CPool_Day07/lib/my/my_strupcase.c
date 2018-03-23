
#include <stdio.h>
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

