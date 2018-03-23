#include <stdio.h>

int my_strlen( char const *str);

char *my_revstr( char * str )
{
    char *dest=str;
    char* p = str + my_strlen(str)-1;
    char temp;
    while(str<p)
    {
        temp=*p;
        *p--=*str;
        *str++=temp;
    }
    str=dest;
    return str;
}

