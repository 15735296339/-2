#include <stdio.h>
#include <string.h>
#include <unistd.h>

int my_strcmp(char const *s1 , char const *s2)
{
    while(*s1!='\0'){
        if(*s1!=*s2){
            return -1;
        }
        else{
            s1++;
            s2++;
        }
    }
    return  0;
}


void my_putchar(char *s)
{
    write(1, s, strlen(s));
}



