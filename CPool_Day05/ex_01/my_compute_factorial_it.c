#include <stdio.h>
#include "limits.h"
int my_compute_factorial_it ( int nb)
{
    long res=0;
    if(nb<=0)
        return 0;
    if(nb==1||nb==2)
        return 1;
    int a=1,b=1;
    int count=nb-2;
    while(count)
    {
        res=a+b;
        a=b;
        b=res;
        count--;
    }
    if(res>INT_MAX)
        return 0;
    return res;
}
