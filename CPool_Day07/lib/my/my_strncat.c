#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

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



int main() {
    //task3
    char a[20] = "hello ";
    char *p = "world!";
    char *s=my_strncat(a, p, 5);
    my_putchar(s);
    my_putchar("\n");
    return 0;
}
