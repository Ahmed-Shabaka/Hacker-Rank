
#include <stdio.h>
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

uint32 max_num_calc(uint32 num1,uint32 num2,uint32 num3,uint32 num4);

int main() {
    uint32 a=0, b=0, c=0, d=0;
    uint32 ans=0;
    scanf("%i %i %i %i", &a, &b, &c, &d);
    ans = max_num_calc(a, b, c, d);
    printf("%i", ans);
    
    return 0;
}

uint32 max_num_calc(uint32 num1,uint32 num2,uint32 num3,uint32 num4)
{
    uint32 result=0;
    if(num1>=num2 && num1>=num3 && num1>=num4)
    {
        result=num1;
    }
    else if (num2>=num1 && num2>=num3 && num2>=num4)
    {
        result=num2;
    }
    else if (num3>=num1 && num3>=num2 && num3>=num4)
    {
        result=num3;
    }
    else if (num4>=num1 && num4>=num2 && num4>=num3)
    {
        result=num4;
    }
    
    return result;
}
