#include <stdio.h>
#include <unistd.h>

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


char **my_str_to_word_array(char const *str )
{
    char dest[100][50];
    char *s=str;
    int i=0, j=0;
    while(*s!='\0')
    {
        if((*s>='A'&&*s<='Z')||(*s>='a'&&*s<='z'))
        {
            dest[i][j]=*s;
            j++;
            s++;
        }
        else
        {
            while(!((*s>='A'&&*s<='Z')||(*s>='a'&&*s<='z')))
            {
                s++;
            }
            dest[i][j]='\0';
            i++;
            j=0;
        }
    }
    dest[i][j]=0;
    dest[i+1][0]=0;
    return dest;
}

int main()
{
    char str[]="hello&^*world gwekwja&#skdjfa";
    char (*res)[50]=my_str_to_word_array(str);
    int i=0;
    while(res[i][0]!='\0')
    {
        my_putstr(res[i]);
        my_putstr("\n");
        i++;
    }
}


