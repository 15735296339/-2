#include <stdio.h>

int my_printf_comb(void)
{
	int i,j,k;
	for(i=0;i<=9;i++){
		for(j=0;j<=9;j++){
			for(k=0;k<=9;k++){
				if(i<j&&j<k){
				printf("%d%d%d",i,j,k);
				printf("\n");		
			    }
		    }
	    }
    }
    return (0);
}

int main(void)
{	
	my_printf_comb();
        return (0);
}
