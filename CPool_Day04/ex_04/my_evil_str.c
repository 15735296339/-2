#include <stdio.h>
#include <string.h>
char *my_evil_str(char *str)
{
    int right = strlen(str)-1;
    int left=0;
    while(left<right)
    {
        char tmp=str[left];
        str[left]=str[right];
        str[right]=tmp;
        left++;
        right--;
    }
    return str;
}


