#include <unistd.h>
#include <stdio.h>

 
void my_putchar(char c){
	write(1,&c,1);
}

int my_print_revalpha(){
	char c;
    for(c = 'z'; c >= 'a'; c--){
		my_putchar(c);
	}
	return 0;
}
