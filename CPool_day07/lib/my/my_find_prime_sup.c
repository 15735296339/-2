#include <stdio.h>

int  isdiv( int  a , int b)
{
    if(b == a - 1)  return  0;
    if( a %b == 0)  return  1;
    return isdiv(a ,b + 1);
}
int  my_is_prime( int nb)
{
    if(nb < 2) return  0;
    if(nb == 2)  return  1;
    return  !isdiv(nb , 2);
}
int my_find_prime_sup( int nb)
{
    if(nb<=1)
        return 2;
    for(int i=nb;i;i++)
        if(my_is_prime(i))
            return i;
    return 1;
}
