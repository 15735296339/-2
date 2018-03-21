#include <unistd.h>
#include <stdio.h>

 
void my_putchar(int c){
	write(1,&c,1);
}

int my_print_comb2(){
	int flag=0;
	for(char i='0';i<='9';i++){
		for(int j='0';j<='8';j++){
			
				
				for(int k='0';k<='8';k++){
					for(int l='1';l<='9';l++){
						
						my_putchar(i);
						my_putchar(j);
						my_putchar(k);
						my_putchar(l);
						my_putchar(',');
						
					}
					}
				
			
		}
		
	}
	return 0;
}

int main(void){
	
	my_print_comb2();
}
