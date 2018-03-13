#include<stdio.h>
int my_isneg(int n)
{
	float a;
	scanf("%f",&a);
	if(a>=0)
	printf("P\n");
	if(a<0)
	printf("N\n");
	return 0;
}
int main(int n)
{
	my_isneg(n);
	return(0);
}
