#include <stdio.h>

#define MAXLINE 1000

int xgetline(char line[], int maxline);

int main()
{
    int len;
    char line[MAXLINE];

    while ((len = xgetline(line, MAXLINE)) > 0) {
        if (len > 80)
            printf("Line length: %d\nInput line: %s", len, line);	
    }
    return 0;   
}

int xgetline(char s[], int m)
{
    int c, i;
	
    for (i = 0; i < m-1 && (c=getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }  
    s[i] = '\0';
    return i;  
}

