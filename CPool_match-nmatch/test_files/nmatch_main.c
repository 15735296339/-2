#include <stdio.h>

int main(int argc, const char * argv[]) 
{
	printf("Match times: %d\n",nmatch(argv[1], argv[2]));
	return 0;
}
