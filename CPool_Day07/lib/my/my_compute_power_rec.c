#include <stdio.h>
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

