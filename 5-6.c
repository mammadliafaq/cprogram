#include <stdio.h>

/* strcopy: copy t to s */
char strcopy(char *s, char *t, int n)
{
  char *p;
	
  p = s;
  int i = 0;
	
  while (i <= n)
    *p++ = *t++;
  *p = '\0';
  return p;    
}

/* strcmp: return <0 if s<t, 0 if s==t, >0 if s>t*/
int strcmp(char *s, char *t, int n)
{
	
  char *p;
	
  p = s;
  int i = 0;
	
  while (i <= n) {
    while ( *p++ == *t++)
      if (*p == '\0')
        return 0;
    return *p - *t;       
  }
}
char srtcat(char *s, char *t, int n) 
{
	
  char *p;
	
  p = s;
  while (*p != '\0')  /* find end of s */
    p++;
  for (int i = 0; i < n && (*p = *t) != '\0'; p++, t++, i++)
    ;
  *p = '\0';
  return p;    
}
main() 
{
  char *s = "now is the time";
  char *t = "for relaxing";
  int n = 5;
	
  char *copy = strcopy(s, t, n); 
  printf("%s\n", copy);
	
  int cmp = strcmp(s, t, n); 
  printf("%d\n", cmp);
	
  char *cat = strcat(s, t, n); 
  printf("%s\n", cat);
}
