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
    int n=my_strlen(tab);
    while(*tab!=0)
    {
        my_putstr(*tab);
        my_putstr("\n");
        tab++;
    }
    return 0;
}

int main()
{
    char *test_word_array[] = {"The", "Answer", "to", "the", "Great", "Question...", "Of",
        "Life,", "the", "Universe", "and", "Everything...", "Is...", "Forty−two,", 0};
    my_show_word_array(test_word_array);
}
