#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int my_putchar(char c)
{
	write(1, &c,1);
}

void print_row(int y, int x)
{
   my_putchar('A');
    for(int i=0;i<y-2;i++)
        my_putchar('B');
    my_putchar('C');
    my_putchar('\n');
}
void print_col(int y, int x)
{
    for(int i=1;i<x-1;i++)
    {
        for(int j=0;j<y;j++)
        {
            if(j==0)
				my_putchar('B');
            else if(j==y-1)
            {
                my_putchar('B');
                my_putchar('\n');
             }
            else
                my_putchar(' ');
        }
    }
}
void colle(int x, int y)
{
    if(x==0||y==0)
        return ;
    else if(x==1||y==1)
    {
        if(y==1)
        {
            for(int i=0;i<x;i++)
                my_putchar('B');
            my_putchar('\n');
        }
        else
        {
            for(int i=0;i<y;i++)
                my_putchar('B');
                my_putchar('\n');
        }
    }
    else
    {
        print_row(x, y);
        print_col(x, y);
        print_row(x, y);
    }
}


int main(int argc, const char * argv[]) {
    int x=atoi(argv[1]);
    int y=atoi(argv[2]);
    colle(x, y);
    return 0;
}
