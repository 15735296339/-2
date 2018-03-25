#include <stdio.h>
#include "include/my.h"

int match(char const *s1 , char const *s2 ) 
{
	if()
	if(*s1 == '\0')
	{
		if(*s2 == '\0')
			return 1;
		if(*s2 != '*') 
			return 0;
	}
	if(*s2 == '?') 
		return match(++s1, ++s2);
	else if(*s2 == '*')
	{
		while(*(++s2) == '*');
		for(; *s1 != '\0'; ++s1)
		{
			if(match(s1, s2)) 
				return 1;
		}
		return match(s1, s2);
	}
	else
	{
		if(*s2 == *s1) 
			return match(++s1, ++s2);
		return 0;
	}
	return 0;
}

