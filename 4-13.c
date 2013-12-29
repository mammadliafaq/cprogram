#include <stdio.h>
#include <string.h>
 
int reverse(char v[], int i, int j)
{
  int temp;
  if(j == 1)
    return 1;
  temp = v[i];
  v[i] = v[j];
  v[j] = temp;
  reverse(v, ++i, --j);
}
 
main()
{
  char word[] = "apple";
  reverse(word, 0, strlen(word)-1);
  printf("%s", word);
}
