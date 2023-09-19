#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef unsigned char           uint8;
typedef unsigned int           uint32;


int main() {

    uint8 *s;
    uint8 *ptr=NULL;
    uint32 counter;
    
    s = (uint8 *)malloc(1024 * sizeof(uint8));
    scanf("%[^\n]", s);
    s = (uint8 *)realloc(s, strlen(s) + 1);
    
    ptr=s;
    for(counter=0;counter<strlen(s);counter++)
    {
        if( memcmp(ptr+counter," ",1 )!=0 )
        {
            printf("%c",ptr[counter]);
        }
        else if (memcmp(ptr+counter," ",1 )==0)
        {
            printf("\n");
        }
    }
    return 0;
}
