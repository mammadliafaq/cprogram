#include <stdio.h>
#define MAXLINE 1000 /*maximum input line length*/

char pattern[] = "ould";

/*getline: get line into s,return length*/
int getline(char s[], int max)
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

/* strindex: return index of t in s, -1 if none*/
int strindex(char s[], char t[])
{
    int i, j, k;

    for (i = 0; s[i] != '\0'; i++){
        for(j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;
        if (k > 0 && t[k] == '\0')
            return i;
     }
     return -1;
}

main()
{
    char line[MAXLINE];
    int found = 0;

    while (getline(line, MAXLINE) > 0)
        if (strindex(line, pattern) >= 0){
            printf("%s", line);
            found++;
        }
    return found;
}
