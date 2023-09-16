#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef unsigned char      uint8;
typedef unsigned int      uint32;

int main() {
	
    uint32 n;
    uint32 temp=0;
    
    scanf("%i", &n);
    while(n>0)
    {
        temp+= n%10;
        n= n/10;
    }
    printf("%i\n",temp);
    return 0;
}
