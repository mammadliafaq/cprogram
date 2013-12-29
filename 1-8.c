#include<stdio.h>

int main() 
{
	int c , nl;
	
	while ((c = getchar()) != EOF)
	     if (c == '\n' || c == '\t' || c == ' ')
	         ++nl;

	printf("%d\n", nl);
	
	system("PAUSE");
	return 0;
}
