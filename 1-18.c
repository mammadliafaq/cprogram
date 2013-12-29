#include <stdio.h>

#define MAXLENGTH 1000

int takeline(char line[], int maxlen) 
{
	int c, i;
	
	for (i = 0; i < maxlen - 1 && (c = getchar())!= EOF && c != '\n'; i++)
	    line[i] = c;
	if (c == '\n') {
		line[i] = c;
		++i;
	}   		
	line[i] = '\0';
	return i;		 	
}
/*void check(char new[], char line[])
{
	int i, j, k, m;
    i = 0;
    
    while ((line[i]) != '\0') 
    	++i;
    new[i] = '\0';
    for (j = 0; j < i; j++)
    	new[j] = line[j];

}
*/
int main()
{
	int length, k, i, m;
	char line[MAXLENGTH];
	char new[MAXLENGTH];
	
	k = 0;
	while((length = takeline(line, MAXLENGTH)) > 0) {
	    for (i = 0; i < length; ++i) {
	        if (line[i] == ' ')
	            k++;
	    }
	   m = k;
	   k = 0;
	    //printf("%d",k);
	    //printf("Line's length :%d, empty characthers :%d***",length,m);
	    
	    if (m != (length - 1) && m != length ) {
	    	printf("Line:  %s",line);
	    	
	   	} 
	    /*else 
	    	//check(new, line);
	    	printf("Line:  %s",line);*/	
	     
	 }
	return 0;
	
}

