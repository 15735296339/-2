#include <stdio.h>

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

