#include <stdio.h>

int my_compute_power_it( int nb, int p)
{
    if(p==0)
        return 1;
    if(p<0)
        return 0;
    int count=p;
    int res=1;
    while(count--)
    {
        res*=nb;
    }
    return res;
}

