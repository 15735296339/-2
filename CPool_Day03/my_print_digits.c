#include <stdio.h>
#define SIZE 10
int my_print_alpha(void)
{
	int a [',']={0,1,2,3,4,5,6,7,8,9};
	int i,j,t;
	printf("\n");
	for(i>0;i<=10;i++)
	{
		for(j>0;j<10-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
			}
		}
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
int main(void)
{
	my_print_alpha();
	return(0);
}

