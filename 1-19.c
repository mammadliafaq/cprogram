#include <stdio.h>

#define MAXLINE 1000

int xgetline(char line[], int maxline);
void reverse(char s[], char l[]);

int main()
{
	int length;
	char line[MAXLINE];
	char new[MAXLINE];
	
	while ((length = xgetline(line, MAXLINE)) > 0) {
		reverse(new,line);
	    printf("%s\n",new);
	}
	return 0;   
}

int xgetline(char line[], int maxline)
{
	int c, i;
	
	for (i = 0; i < maxline-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
		
	if (c == '\n') {
		line[i] = c;
		++i;
	}  
	line[i] = '\0';
	return i; 

 
}

void reverse(char s[], char l[])
{   
    int i, j;
    i = 0;
    while ((l[i]) != '\0') 
    	++i;

    s[i] = '\0';
    for (j = 0;j < i; j++) 
		s[j] = l[i-1-j];
	

	
}
