#include <stdio.h>
#include <ctype.h>

#define MAXLINE 100

/*atof : convert string s to double */

double atof(char s[])
{
	double val, power;
	int i, sign;
	
	for (i = 0; isspace(s[i]); i++) /* skip white space */
	;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
	    i++;
	for (val = 0.0; isdigit(s[i]); i++)
	    val = 10.0 * val + (s[i] - '0');
	if (s[i] == '.')
	    i++;
	for (power = 1.0; isdigit(s[i]); i++){
	    val = 10.0 * val + (s[i] - '0');
	    power *= 10.0;
    }
    return sign * val / power;
}

int xgetline(char s[], int max)
{
  int c, i;
  i = 0;
  while ((c=getchar()) != EOF && c != '\n' && --max > 0)
      s[i++] = c;
  if (c == '\n')
      s[i++] = c;
  s[i] = '\0';
  return i;
}

/*rudimentary calculator */
main()
{
	double sum, atof(char []);
	char line[MAXLINE];
	int xgetline(char line[], int max);
	
	sum = 0;
	while (xgetline(line, MAXLINE) > 0)
	    printf("\t%g\n", sum += atof(line));
	return 0;

}
