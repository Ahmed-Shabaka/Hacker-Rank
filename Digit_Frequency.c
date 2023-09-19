#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef unsigned char           uint8;
typedef unsigned int           uint32;


#define MAX_ARRAY_ELEMENT 1000

int main ()
{
    uint8 string[MAX_ARRAY_ELEMENT];
    uint32 counter_1=0;
    uint32 counter_2=0;
    uint8 digit_val='0';
    uint32 sum=0;
    
    memset(string,'\0',sizeof(string));
    fflush(stdin);
    gets(string);
    
    for(counter_1=0;counter_1<10;counter_1++)
    {
        for(counter_2=0;string[counter_2]!='\0';counter_2++)
        {
            if(digit_val==string[counter_2])
            {
                sum++;
            }
        }
        printf("%i ",sum);
        sum=0;
        digit_val++;
    }
    
    return 0;
}
