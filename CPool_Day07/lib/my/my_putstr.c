#include "stdio.h"
#include "unistd.h"

int my_putstr(char const *str)
{
	int len=0;
	while(str[len]!='\0')
   	 {
        	len++;
    	}
	return write(1,str,len);
}

