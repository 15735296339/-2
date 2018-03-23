
#include <stdio.h>
#include <math.h>
double mysqrt(double a,double x0)
{
    double x1;
    x1=(x0+a/x0)/2.0;
    if(fabs(x1-x0)>0.0000000000001)
        return mysqrt(a,x1);
    else
        return x1;
}

int my_compute_square_root( int nb )
{
    int res=mysqrt(nb, 1);
    return res*res==nb?res:0;
}


