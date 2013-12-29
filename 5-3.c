#include <stdio.h>

/* strcat: concatenate t to end of s */
char srtcat(char *s, char *t) 
{
	
	while (*s != '\0')  /* find end of s */
	    s++;
	while ((*s++ = *t++) != '\0') /* copy t */
	    ;
        *s = '\0';
        return s;
}

main()
{ 
	char *s = "now is the time";
	char *t = "for relaxing";
	
        char *cat = strcat(s, t, n); 
	printf("%s\n", cat);
}
