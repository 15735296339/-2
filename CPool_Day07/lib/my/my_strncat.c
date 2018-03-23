#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
int my_strlen(char const *str);

char * my_strncat(char *dest , char const *src, int nb)
{
    char *start = dest;
    int len_dest = my_strlen(dest);
    dest+=len_dest;
    while (*dest++ = *src++)
    {
        nb--;
        if(nb==0)
            break;
    }
    return start;
}


