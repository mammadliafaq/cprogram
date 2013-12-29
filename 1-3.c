#include <stdio.h>

float farh,celcie;

int upper,lower,step;

int main() 
{
  lower=0;
  upper=300;
  step=20;
  farh=lower;
    
  printf("Faranheyt  Celcie\n");
  while (farh<=upper){
    celcie=5*(farh-32)/9;
    printf("%3.0f %12.2f\n",farh,celcie); 
    farh=farh + step;
  }
     
  system("PAUSE"); 
  return 0;
    
}
