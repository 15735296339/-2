#include <stdio.h>
#include <unistd.h>
struct info_param
{
    int length ;
    char *str ;
    char *copy;
    char **word_array ;
};


int my_show_param_array(struct info_param const *par)
{
    int i=0;
    struct info_param *p=par;
    while(p->str!=0)
    {
        my_show_word_array(p->word_array);
        p++;
    }
    return 0;
}


