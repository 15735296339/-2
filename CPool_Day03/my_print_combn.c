#include <stdio.h>

int my_print_combn(int n)
{
    switch (n) {
        case 1:
            for(int k=0;k<=9;k++)
                printf("%d ",k);
            printf("\n");
            break;
        case 2:
            for(int i=0;i<=9;i++)
                for(int j=i+1;j<=9;j++)
                    printf("%d%d ", i,j);
            printf("\n");
            break;
        case 3:
            for(int i=0;i<=9;i++)
                for(int j=i+1;j<=9;j++)
                    for(int k=j+1;k<=9;k++)
                        printf("%d%d%d ", i,j,k);
            printf("\n");
            break;
        case 4:
            for(int i=0;i<=9;i++)
                for(int j=i+1;j<=9;j++)
                    for(int k=j+1;k<=9;k++)
                        for(int l=k+1;l<=9;l++)
                            printf("%d%d%d%d ", i,j,k,l);
            printf("\n");
            break;
        case 5:
            for(int i=0;i<=9;i++)
                for(int j=i+1;j<=9;j++)
                    for(int k=j+1;k<=9;k++)
                        for(int l=k+1;l<=9;l++)
                            for(int m=l+1;m<=9;m++)
                                printf("%d%d%d%d%d ", i,j,k,l,m);
            printf("\n");
            break;
        case 6:
            for(int i=0;i<=9;i++)
                for(int j=i+1;j<=9;j++)
                    for(int k=j+1;k<=9;k++)
                        for(int l=k+1;l<=9;l++)
                            for(int m=l+1;m<=9;m++)
                                for(int o=m+1;o<=9;o++)
                                    printf("%d%d%d%d%d%d ", i,j,k,l,m,o);
            printf("\n");
            break;
        case 7:
            for(int i=0;i<=9;i++)
                for(int j=i+1;j<=9;j++)
                    for(int k=j+1;k<=9;k++)
                        for(int l=k+1;l<=9;l++)
                            for(int m=l+1;m<=9;m++)
                                for(int o=m+1;o<=9;o++)
                                    for(int p=o+1;p<=9;p++)
                                                printf("%d%d%d%d%d%d%d ", i,j,k,l,m,o,p);
            printf("\n");
            break;
        case 8:
            for(int i=0;i<=9;i++)
                for(int j=i+1;j<=9;j++)
                    for(int k=j+1;k<=9;k++)
                        for(int l=k+1;l<=9;l++)
                            for(int m=l+1;m<=9;m++)
                                for(int o=m+1;o<=9;o++)
                                    for(int p=o+1;p<=9;p++)
                                        for(int q=p+1;q<=9;q++)
                                                printf("%d%d%d%d%d%d%d%d ", i,j,k,l,m,o,p,q);
            printf("\n");
            break;
        case 9:
            for(int i=0;i<=9;i++)
                for(int j=i+1;j<=9;j++)
                    for(int k=j+1;k<=9;k++)
                        for(int l=k+1;l<=9;l++)
                            for(int m=l+1;m<=9;m++)
                                for(int o=m+1;o<=9;o++)
                                    for(int p=o+1;p<=9;p++)
                                        for(int q=p+1;q<=9;q++)
                                            for(int r=q+1;r<=9;r++)
                                                printf("%d%d%d%d%d%d%d%d%d ", i,j,k,l,m,o,p,q,r);
            printf("\n");
            break;
        case 10:
            printf("0123456789\n");
            break;
        default:
            break;
    }
    return 0;
}
int main(void)
{
    my_print_combn(8);
    return 0;
}