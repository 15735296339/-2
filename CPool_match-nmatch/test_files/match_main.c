#include <stdio.h>
#include "../include/my.h"
int main(int argc, const char * argv[]) 
{
	printf("%d\n", match(argc[1],argv[2]));
	return 0;
}
