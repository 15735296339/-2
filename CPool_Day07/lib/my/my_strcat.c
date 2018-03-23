#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
int my_strlen(const char* str);
char * my_strcat(char *dest , char const *src)
{
    char *start = dest;
    int len_dest = my_strlen(dest);
    dest+=len_dest;
    while (*dest++ = *src++);
    return start;
}

