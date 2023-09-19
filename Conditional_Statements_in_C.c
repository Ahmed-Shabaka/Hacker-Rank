#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef unsigned char      uint8;
typedef unsigned int      uint32;


void func(uint32 num);

int main() 
{
    uint32 a;
    scanf("%i",&a);
    func(a);

    return 0;
}

void func(uint32 num)
{
    uint8 arr[10][6]={"zero","one","two",
                      "three","four","five","six",
                      "seven","eight","nine"};
    
        if(num>=0 && num<=9)
        {
            printf("%s\n",arr[num]);
        }
        else
        {
            printf("Greater than 9\n");
        }
    
}
