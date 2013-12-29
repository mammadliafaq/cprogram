#include <stdio.h>
#include <stdlib.h>
 
#define YES 1
#define NO  0
#define BASE 16
#define MAXCHAR 100

int pow(int base, int m)
{
	int  mult;

	for (mult = 1; m > 0; --m)
	    mult = mult * base;
	return mult;    
}
 
int htoi(char s[])
 {
    int hexdigit, i, isHex, sum, k, j;    
    i= j = 0;
    
    while (s[j] != '\0')
        ++j;
    
    if(s[i] == '0') {
        ++i;
        if(s[i] == 'x' || s[i] == 'X'){            
            ++i;
        }
    }
     
    sum = 0;
    isHex = YES;
    
    for(k = j - 3; isHex == YES && k >= 0; i++,k--) {
        if(s[i] >= '0' && s[i] <= '9') {            
            hexdigit = s[i] - '0';
        } else 
		if(s[i] >= 'a' && s[i] <= 'f') {            
            hexdigit = s[i] - 'a' + 10;
        } else 
		if(s[i] >= 'A' && s[i] <= 'F') {
            hexdigit = s[i] - 'A' + 10;
        } else {
            isHex = NO;
        }
         if (isHex == YES) {
			int base = BASE;
		    sum = sum + pow(base,k) * hexdigit;
		}
    }
     
    return sum;
}

int main(int argc, char** argv) {
     
    char hex[MAXCHAR];
    scanf("%s",&hex);
    int digit = htoi(hex);
    printf("The integer is %d", digit);
     
    return 0;
}

