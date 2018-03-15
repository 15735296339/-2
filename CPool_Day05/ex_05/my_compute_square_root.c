
#include <stdio.h>
int my_compute_square_root( int nb )
{
    int res;
    for(res=0;res<=(nb/2+1);res++)
    {
        if(res*res==nb)
            return res;
    }
    return 0;
}

