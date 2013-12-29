#include <stdio.h>

float farh,celcie;

int upper,lower,step;

int main() 
{
    lower=-20;
    upper=200;
    step=20;
    celcie=lower;
    
   
    while (celcie<=upper){
         farh=(9*celcie)/5+32;
         printf("%3.0f %12.2f\n",celcie,farh); 
         celcie=celcie + step;
    }
     
	system("PAUSE"); 
    return 0;
    
}
