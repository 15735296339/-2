
#include <stdio.h>
#include <math.h>
#include <unistd.h>


void my_putchar(char *s)
{
    write(1, s, strlen(s));
}


int my_getnbr_base(char const * str , char const *base)
{
    int n=strlen(base);
    int i,j;
    long c=0;
    int flag=1;
    j=strlen(str);
    int a=0,b=0;
    while(str[a]=='-'||str[a]=='+')
    {
        flag=(str[a]=='-'?0:1);
        b++;
        a++;
    }
    if(flag==0)
        my_putchar("-");
    for(i=j-1,j=0;i>=a;i--,j++)
    {
        int tmp;
        if(str[i]>='0'&&str[i]<='9')
            tmp=(str[i]-'0');
        else
            tmp=(str[i]-'A')+10;
        c=c+(long)(tmp*pow(n,j));
    }    
    return c;
    
}

