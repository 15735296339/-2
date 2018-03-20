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

int my_compute_power_rec( int nb, int p)
{
    if(p==0)
        return 1;
    if(p<0)
        return 0;
    if(p==1)
        return nb;
    else if(p%2==0)
        return my_compute_power_rec(nb, p/2)*my_compute_power_rec(nb, p/2);
    else
        return my_compute_power_rec(nb, p/2)*my_compute_power_rec(nb, p/2)*nb;
}

void my_putchar(char *s)
{
    write(1, s, my_strlen(s));
}


int my_getnbr_base(char const * str , char const *base)
{
    int n=my_strlen(base);
    int i,j;
    long c=0;
    int flag=1;
    j=my_strlen(str);
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
        c=c+(long)(tmp*my_compute_power_rec(n,j));
    }    
    return c;
    
}
