#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *my_strcapitalize ( char * str )
{
    char *p=str;
    if(*p>='a'&&*p<='z') *p=*p-32;
    while(*++p!='\0')
    {
        if(*(p-1)==' '||*(p-1)=='.'||*(p-1)=='?'||*(p-1)=='!')
        {
            if(*p>='a'&&*p<='z') *p-=32;
        }
        else if(*p>='A'&&*p<='Z') *p+=32;
    }
    return str;
}

void my_putchar(char *s)
{
    write(1, s, strlen(s));
}



