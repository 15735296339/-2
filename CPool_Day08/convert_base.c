#include <stdio.h>
#include <unistd.h>
#include <limits.h>


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

int trans1(char const a[],int d1)
{
    
    int i=0,num,s=0,P=1;
    
    while(P)
    {
        if(a[i]>='A'&&a[i]<='F')   num=a[i]-'0'-7;
        else if (a[i]>='a'&&a[i]<='f') num=a[i]-'0'-39;
        else if (a[i]>='0'&&a[i]<='9') num=a[i]-'0';
        if(num<d1)
        {
            if(i==0) s=num;
            else
            {
                s*=d1;
                s+=num*d1;
            }
        }
        
        if( a[++i]=='\0') P=0;
        
    }
    return s;
}


int trans2(unsigned long n, int d, char s[])
{
    int M=100;
    char digits[] ="0123456789ABCDEF";
    char buf[M+1];
    int j, i = M;
    s[0]='\0';
    if(d<2||d>16)
    {
        s[0]='\0';
        return 0;
    }
    buf[i]='\0';
    do
    {
        buf[--i]=digits[n%d];
        n/=d;
    }while(n);
    
    for(j=0;(s[j]=buf[i])!='\0';j++,i++);
    
    return j;
}


char *convert_base ( char const *nbr , char const *base_from , char const *base_to )
{
    int _from=my_strlen(base_from);
    int _to=my_strlen(base_to);
    unsigned long n=trans1(nbr, _from);
    char s[200];
    trans2(n, _to, s);
    return s;
}



int main()
{
    char s[]="1232DF6";
    char from[]="01234567";
    char to[]="0123456789ABCDEF";
    char q[200];
    char *res=q;
    res=convert_base(s,from, to);
    my_putstr(res);
    my_putstr("\n");
}


