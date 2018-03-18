#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int my_putchar(char c);

int cal_row(int n)
{
    return 3*n+((n+1)*n)/2;
}

void display_tree(int tree[],int row,int mx)
{
    for(int i=0;i<row;i++)
    {
        for(int k=0;k<(mx-tree[i])/2;k++)
			my_putchar(' ');
        for(int j=0;j<tree[i];j++)
            my_putchar('*');
        my_putchar('\n');
    }
}
void display_root(int mx, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<(mx-n)/2;k++)
            my_putchar(' ');
        for(int j=0;j<n;j++)
            my_putchar('|');
        my_putchar('\n');
    }
}

void tree(int size)
{
    if(size==0)
        return;
    int rows=cal_row(size);
    int cols[rows];
    cols[0]=1;
    int j=0;
    int init=1;
    int increment=2;
    int flag=0, incre=1;
    for(int i=1;i<=size;i++)
    {
        int a;
        for(int r=0;j<(3*i+((i+1)*i)/2);j++, r++)
        {
            cols[j]=init+increment*r;
            a=cols[j]-2*incre;
        }
        init=a;
        flag++;
        if(flag==2)
        {
            flag=0;
            incre++;
        }
    }
    int mx=cols[j-1];
    display_tree(cols, rows, mx);
    display_root(mx, size);
}



