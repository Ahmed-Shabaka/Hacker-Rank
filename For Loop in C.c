#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef unsigned char      uint8;
typedef unsigned int      uint32;


void func(uint32 num1,uint32 num2);

int main() 
{
    uint32 a, b;
    scanf("%i",&a);
    scanf("%i",&b);
    func(a,b);

    return 0;
}

void func(uint32 num1,uint32 num2)
{
    uint8 arr[10][6]={"zero","one","two",
                      "three","four","five","six",
                      "seven","eight","nine"};
    uint32 counter=0;
    
    for(counter=num1;counter<=num2;counter++)
    {
        if(counter>=0 && counter<=9)
        {
            printf("%s\n",arr[counter]);
        }
        else
        {
            if ( (counter%2)==0 )  
            {
                printf("even\n");
            }
            else
            {
                printf("odd\n");
            }
        }
    }
    
}
