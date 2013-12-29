#include <stdio.h>

main() 
{
	int c,d;
	d=0;
	
	while((c=getchar()) != EOF)
	{ 
       if (c!=' ') {	
           if (d==' ') {  
		      printf("\n");   
			  putchar(c);
		   } else   
		     putchar(c);
      }

    d=c;
	}

	system("PAUSE");
	return 0;
}
