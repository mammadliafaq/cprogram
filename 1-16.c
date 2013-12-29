#include <stdio.h>

#define MAXLINE 10

int xgetline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	
	max = 0;

	while ((len = xgetline(line, MAXLINE)) > 0) {
		printf("Current line's length: %d , current line: %s", len, line);
	    if (len > max) {
	     	max = len;
	     	copy(longest, line);
	    }	
	}
	if (max > 0) {
		printf("\n");
		printf("The longest line's length: %d , the longest line: %s \n",max, longest);
	}
	    
	return 0;   
}

int xgetline(char line[], int maxline)
{
	int c, i,j;
	
	for (i = 0, j = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
		if (i < maxline - 1)
		    line[j++] = c;
	}
	if (c == '\n') {
		if (i > maxline - 1)
		    line[j] = c;
		    ++j;
	} 
	++i;
	if (i > maxline - 1)
	    line[j] = '\0';
	return i;
    		 
}

void copy(char to[], char from[])
{
    int i;
	
	i = 0;
	while ((to[i] = from[i]) != '\0')
	    ++i;
	
}

