#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main() 
{   
    int c , state;
	
	while((c = getchar()) != EOF){
		state = FALSE;
		
                if (c == '\t') {
        	
			putchar('\t');
			state = TRUE;
		} else 
		if (c == '\b') {
			
			putchar('\b');
			state = TRUE;
		} else
		if (c == ' \ ')	{
			
			putchar('\\');
			state = TRUE;
		} else
		if (state == FALSE) {
			putchar(c);
		}
	}
	
	system("PAUSE");
	return 0;  
}   
	

