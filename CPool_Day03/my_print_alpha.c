#include <unistd.h>
#include <stdio.h>

 
void my_putchar(char c){
	write(1,&c,1);
}

int my_print_alpha(){
	char c;
    for(c = 'a'; c <= 'z'; ++c){
		my_putchar(c);
	}
	return 0;
}
