#include <stdio.h>
#include <unistd.h>
int my_strlen(char const *str)
{
    int len = 0;
    while(( *str++ ))
    {
        len++;
    }
    return len;
}

void my_putstr(char *s)
{
    write(1, s, my_strlen(s));
}
char *my_strdup ( char const * src )
{
    char *dest=(char*)malloc(sizeof(char));
    char *p=dest;
    while(*src!='\0')
    {
        *dest=*src;
        dest++;
        src++;
    }
    return p;
}

int main(int argc, const char * argv[]) {
    char *str="hello world!\n";
    char *dest=my_strdup(str);
    my_putstr(dest);
}
