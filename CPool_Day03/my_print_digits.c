#include <unistd.h>
#include <stdio.h>

 
void my_putchar(char c){
	write(1,&c,1);
}

int my_print_digits(){
	char c;
	for(c='0';c<='9';c++){
		my_putchar(c);
	}
}

int main(void){
	my_print_digits();
}
