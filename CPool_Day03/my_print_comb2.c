#include <stdio.h>
int my_print_comb2(void)
{
	int i,j;
	for(i=0;i<=99;i++)
	{
		for(j=0;j<=99;j++)
		{
			if(i<j)
			{
				if(i<10&&j>9) printf("0%d %d, ",i,j);
				else if(i>9&&j<10) printf("%d 0%d, ",i,j);
				else if(i<10&&j<10) printf("0%d 0%d, ",i,j);
				else printf("%d %d ",i,j);
			}
		}
	}
   return(0);
}
int main(void)
{
	my_print_comb2();
	return (0);
}
