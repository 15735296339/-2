

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


char* my_strstr(char* str,char const * to_find)
{
    for(int i=0;str[i]!='\0';i++)
    {
        int j=0;
        int temp=i;
        if(str[i]==to_find[j])
        {
            while(str[i++]==to_find[j++])
            {
                if((to_find[j]=='\0'))
                    return &str[i-j];
            }
            i=temp;
        }
    }
    return NULL;
}

void my_putchar(char *s)
{
    write(1, s, my_strlen(s));
}


