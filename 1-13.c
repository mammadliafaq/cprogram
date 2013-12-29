#include <stdio.h>

#define IN  1
#define OUT 0

int main()
{
    int c, state;
    
    state = OUT;
    while ((c = getchar()) != EOF) {
		if (c != ' ' && c != '\n' && c != '\t') {
			 putchar('*');
		     state = IN;
		}   
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state == IN) {
				printf("\n") ;
			    state = OUT;
			}
	    }  
	}
	
	return 0;
		  
}
