#include <stdio.h>
int my_print_alpha(void)
{
	char c='a'; 
	for(int i=0;i<26;i++)
	{
		printf("%c",c+i);
	}
	printf("\n");
	return 0;
}
int main(void)
{
	my_print_alpha();
	return(0);
}
