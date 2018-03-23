#include <stdio.h>
#include "limits.h"
int my_strlen(const char *str);
int my_getnbr(char const *str)
{
    long res=0;
    int flag=1;
    int isnum=0;
    int len=my_strlen(str);
    for(int i=0;i<len;i++)
    {
        if((str[i]<'0'||str[i]>'9')&&(str[i]!='+'&&str[i]!='-'))
        {
                break;
        }
        else if(str[i]=='+'||str[i]=='-')
        {
            if(isnum==1)
                break;
            else if(str[i]=='+')
                flag=1;
            else
                flag=0;
        }
        else
        {
            isnum=1;
            res=res*10+(str[i]-'0');
            if(res>INT_MAX||res<INT_MIN)
                return 0;
        }
    }
    
    return flag?res:-res;
}
