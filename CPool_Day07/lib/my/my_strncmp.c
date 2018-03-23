#include <stdio.h>

int my_strncmp(char const *str1, char const *str2, int n)
{
    if(!n)
        return 0;
    while(n-- && *str1 && (*str1 ++ == *str2 ++))
        ;
    return *str1-*str2;
}


