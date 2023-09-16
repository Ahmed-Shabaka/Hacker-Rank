#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef unsigned char           uint8;
typedef signed char             sint8;
typedef unsigned short int     uint16;
typedef signed short int       sint16;
typedef unsigned int           uint32;
typedef signed long int        sint32;
typedef unsigned long long int uint64;
typedef signed long long int   sint64;
typedef float                 float32;
typedef double                float64;


void calculate_the_maximum(uint32 n, uint32 k) 
{
    uint32 counter1=0;
    uint32 counter2=0;
    uint32 result=0;
    
    for(counter1=1;counter1<n;counter1++)
    {
        for(counter2=counter1+1;counter2<=n;counter2++)
        {
            if( (counter1&counter2)>result && (counter1&counter2)<k )
            {
                result=counter1&counter2;
            }
        }
    }
    printf("%i\n",result);
    result=0;
    
    for(counter1=1;counter1<n;counter1++)
    {
        for(counter2=counter1+1;counter2<=n;counter2++)
        {
            if( (counter1|counter2)>result && (counter1|counter2)<k )
            {
                result=counter1|counter2;
            }
        }
    }
    printf("%i\n",result);
    result=0;
    
    for(counter1=1;counter1<n;counter1++)
    {
        for(counter2=counter1+1;counter2<=n;counter2++)
        {
            if( (counter1^counter2)>result && (counter1^counter2)<k )
            {
                result=counter1^counter2;
            }
        }
    }
    printf("%i\n",result);
    result=0;
    
}

int main() {
    uint32 n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
