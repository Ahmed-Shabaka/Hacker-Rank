#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef unsigned char           uint8;
typedef signed char             sint8;
typedef unsigned short int     uint16;
typedef signed short int       sint16;
typedef unsigned long int      uint32;
typedef signed long int        sint32;
typedef unsigned long long int uint64;
typedef signed long long int   sint64;
typedef float                 float32;
typedef double                float64;


int main()
{
    uint32 n=0;
    uint32 *ptr=NULL;
    uint32 counter=0;
    uint32 sum=0;
    
    scanf("%i",&n);
    ptr=(uint32 *)malloc(n*sizeof(uint32));
    if(NULL!=ptr)
    {
        for(counter=0;counter<n;counter++)
        {
            scanf("%i",(ptr+counter));
            sum+=ptr[counter];
        }
        printf("%i",sum);
        free(ptr);
        ptr=NULL;
    }
    
    
    return 0;
}
















