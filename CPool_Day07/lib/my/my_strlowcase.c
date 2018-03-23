#include <stdio.h>
char *my_strlowcase ( char * str )
{
    char *p=str;
    while(*p!='\0')
    {
        if(*p>='A'&&*p<='Z')
            *p+=32;
        p++;
    }
    return str;
}


