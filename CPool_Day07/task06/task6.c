#include <stdio.h>
#include <unistd.h>
#include <string.h>
//#include <stdlib.h>

int my_strlen ( char const * str )
{
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    return len;
}

void my_putchar(char *s)
{
    write(1, s, my_strlen(s));
}

int strcmp(const char* str1, const char* str2)
{
    int ret = 0;
    while(!(ret=*(unsigned char*)str1-*(unsigned char*)str2) && *str1)
    {
        str1++;
        str2++;
    }
    if (ret < 0)
    {
        return -1;
    }
    else if (ret > 0)
    {
        return 1;
    }
    return 0;
}
int compare(void *i, void *j)
{
    return strcmp(*(char **)i, *(char **)j);
}

int main(int argc,char *argv[])
{
    int M=0;
    char* a[argc];
    for (int N = 0; N < argc; N++)
    {
        a[N] = argv[N];
        M += my_strlen(a[N])+1;
    }
    qsort(a, argc, sizeof(char *), compare);
    for (int i=0; i < argc; i++)
    {
        my_putchar(a[i]);
        my_putchar("\n");
    }
    return 0 ;
}
