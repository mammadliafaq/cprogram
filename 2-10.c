#include <stdio.h>

int lower(int c) 
{
	if (c >= 'A' && c <= 'B')
	    return c + 'a' - 'A';
	else 
	    return c;      
}

int main()
{
	int c;
	
	while((c = getchar()) != EOF){
		printf("%d ",lower(c));
	//	printf("%d ",(c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c);
	}
	return 0;
}
