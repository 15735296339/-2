#include <stdio.h>
#include <unistd.h>

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

int main(int argc,char *argv[])
{
    for(int i=argc-1;i>=0;i--)
    {
        my_putchar(argv[i]);
        my_putchar("\n");
    }
    return 0;
}
