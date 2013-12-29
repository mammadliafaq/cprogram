#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int farh;

int  main()
{
    for(farh = UPPER;farh >= LOWER; farh -= STEP) 

       printf("%3d %6.2f\n", farh, 5.0/9.0*(farh-32));
    
    system("PAUSE");
    return 0;
	   
}
