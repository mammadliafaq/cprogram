#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float celciecal(int farh);

int  main()
{
    int farh;
    for(farh = LOWER; farh <= UPPER; farh += STEP) 
       printf("%3d %6.2f\n", farh, celciecal(farh));
    
    system("PAUSE");
    return 0;
	   
}

float celciecal(int farh)
{
    float celcie;
    celcie = 5.0/9.0*(farh-32);
    return celcie;
    
}
