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

void my_putstr(char const *s)
{
    write(1, s, my_strlen(s));
}
int my_show_word_array(char * const *tab)
{
    int n=my_strlen(*tab);
    while(*tab!=0)
    {
        my_putstr(*tab);
        my_putstr("\n");
        tab++;
    }
    return 0;
}

