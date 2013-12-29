#include <stdio.h>

#define MAXCHAR 100

int any(char st1[], char st2[])
{
	int i, n;
	
	for (i = 0; st1[i] != '\0'; i++) {
		if (st1[i] == st2[i]) {	
		    n = i;
		    break;
		}
		else 
		    n = -1;
	}
	return n;
}

int main() 
{
	char s1[MAXCHAR], s2[MAXCHAR];

	scanf("%s %s",&s1, &s2);
	printf("%d\n",any(s1, s2));
	return 0;
}
