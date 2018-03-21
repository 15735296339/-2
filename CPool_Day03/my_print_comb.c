#include <unistd.h>
#include <stdio.h>

 
void my_putchar(char c){
	write(1,&c,1);
}

int my_print_comb(){
	int flag=0;
	for(char i='0';i<='7';i++){
		for(int j='1';j<='8';j++){
			if(i<j){
				for(int k='2';k<='9';k++){
					if(j<k){
						my_putchar(i);
						my_putchar(j);
						my_putchar(k);
						if(i=='7'&&j=='8'&&k=='9'){
						}else{
							my_putchar(',');
						}
					}
				}
			}
		}
		
	}
	return 0;
}
