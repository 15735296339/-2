#include <stdio.h>
#include <string.h>
#include <unistd.h>

int my_strncmp(char const *str1, char const *str2, int count)
{
    if(!count)
        return 0;
    while(count-- && *str1 && (*str1 ++ == *str2 ++))
        ;
    return *str1-*str2;
}


void my_putchar(char *s)
{
    write(1, s, strlen(s));
}




