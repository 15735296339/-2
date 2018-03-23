#include <stdio.h>
#include <unistd.h>


struct info_param *my_params_to_array( int ac , char **av)
{
    struct info_param stu1[20];
    int i;
    for(i=0;i<ac;i++)
    {
        stu1[i].length=ac;
        stu1[i].str=&av[i];
        stu1[i].copy=av[i];
        stu1[i].word_array=av;
    }
    stu1[i].length=ac;
    stu1[i].str=0;
    stu1[i].copy=0;
    stu1[i].word_array=av;
    return stu1;
}



