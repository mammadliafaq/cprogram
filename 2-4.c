#include <stdio.h>

#define MAXCHAR 100

void squeeze(char st1[], char st2[])
{
	int i, j;
	
	for (i = j = 0; st1[i] != '\0'; i++) {
		if (st1[i] != st2[i])
		    st1[j++] = st1[i];
	}
	st1[j] = '\0';
}

int main() 
{
	char s1[MAXCHAR], s2[MAXCHAR];

	scanf("%s %s",&s1, &s2);
	squeeze(s1,s2);
	printf("%s\n",s1);
	return 0;
}
