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
	uint32 num1,num2;
    float32 num_1,num_2;
    scanf("%i %i %f %f",&num1,&num2,&num_1,&num_2);
    printf("%i %i\n",num1+num2,num1-num2);
    printf("%.1f %.1f\n",num_1+num_2,num_1-num_2);
    return 0;
}
