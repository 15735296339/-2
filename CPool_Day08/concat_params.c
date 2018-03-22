#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int my_strlen(char const *str)
{
    int len = 0;
    while((*str++))
    {
        len++;
    }
    return len;
}

char * my_strcat(char *dest , char const *src)
{
    char *start = dest;
    int len_dest = my_strlen(dest);
    dest+=len_dest;
    while (*dest++ = *src++);
    return start;
}

char *concat_params(int argc, char **argv)
{
    char *res =malloc(sizeof(*res)*argc);
    for(int i=0;i<argc;i++)
    {
        my_strcat(res, argv[i]);
        my_strcat(res, "\n");
    }
    return res;
}

void my_putstr(char *s)
{
    write(1, s, my_strlen(s));
}

