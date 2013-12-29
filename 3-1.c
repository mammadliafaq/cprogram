#include <stdio.h>

#define LENGTH 10

int binsearch(int x, char array[], int length) 
{
	int low, high, mid;
	
	low = 0;
	high = length - 1;
	while (low < high) {
		mid = (low + high) / 2;
		printf("mid: %d\n",mid);
		printf("x: %d array[mid]: %c\n",x,array[mid]);
		if (x < array[mid]){
			high = mid - 1;
			printf("high: %d\n",high);
		} else
	    if (x > array[mid]) {
		    low = mid + 1; 
			printf("low: %d\n",low);
		}
	}
	printf("Men burdayam\n");
	if (x == array[mid])
	   {
	    printf("x=middir de\n");
	    return mid;}
	else
	    return -1;    
}

int main()
{ 
    char v[LENGTH];
    int result, a, i;
    
    for (i = 0; i < 9; i++)
        v[i] = i + 1;
    a = 3;
    result = binsearch(a, v, LENGTH);
    if (result == -1)
	    printf("%d is not in array.\n",a);
	else     
        printf("%d is in array and its index is %d\n",a,result);
        
    return 0;    
    
	
}
