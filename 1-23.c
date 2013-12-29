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
void check(char new[], char line[])
{
	int i, j, k, m, l, remember, remember1, coment, status;
	
    i = coment = status = 0;
    while ((line[i]) != '\0') 
    	++i;
    for (j = 0; j < i; j++) {
    	if (line[j] == '/' && line[j+1] == '*' && status == 0) {
    		remember = j;
    		j=j+2;
    		coment = 1;
    		status = 1;
    	}
    	if (line[j] == '*' && line[j+1] == '/') {
    		remember1 = j;
    		j=j+2;
    		    if (coment == 1)
    		        coment = 2;
        }
    }	
    if (coment == 2) {
    	for (k = 0, m=0; k < remember ; ++k) {
    	    new[m] = line[k];
    	    m++;
    	} 
    	for (l = remember1 + 2; l <= i + 1; ++l) {  
		    new[m] = line[l] ;
		    m++;
    	}    
	}
	else
	    for (k = 0; k <= i + 1; ++k)
		    new[k] = line[k];	
    

}


int main()
{
	int length;
	char line[MAXLENGTH];
	char new[MAXLENGTH];
	

	while((length = takeline(line, MAXLENGTH)) > 0) {
	    if (length > 0)
	        check(new ,line);
	    printf("%s",new);    
	 }
	return 0;
	
}

