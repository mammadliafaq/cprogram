#include <stdio.h>

main()
{
	int c, i, nwhite, nother, ndigit, nletter;
	
	nwhite = nother = ndigit = nletter = 0;
	    
	while((c = getchar()) != EOF)   
	    if (c >= '0' && c <= '9') 
	        ++ndigit;
	    else if (c == ' ' || c == '\n' || c == '\t')  
		    ++nwhite;
	    else if (c == ',' || c == '!' || c== '?' || c == '.' || c == '-')
		    ++nother;
		else
		    ++nletter;
			    
     printf("digits:  ");
	 for (i = 0; i < ndigit; ++i)
	     putchar('*');
	 printf("\n");
	     
	 printf("letters: ");
	 for (i = 0; i < nletter; ++i)
	     putchar('*');
	 printf("\n"); 
	      
	 printf("blanks:  ");
	 for (i = 0; i < nwhite; ++i)
	     putchar('*');
	 printf("\n");
	       
	 printf("marks:   ");
	 for (i = 0; i < nother; ++i)
	     putchar('*');
	 printf("\n");      
	     	
	 return 0;			  
}
