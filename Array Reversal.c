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

int main()
{
    uint32 n;
    uint32 *ptr1;
    uint32 counter=0;
    uint32 *ptr2=NULL;
    uint32 temp;
    scanf("%i", &n);
    ptr1=(uint32 *)malloc(n*sizeof(uint32));
    if(NULL!=ptr1)
    {
        for(counter=0;counter<n;counter++) 
        {
            scanf("%i", ptr1+counter );
        }
        
        ptr2=(uint32 *)malloc(n*sizeof(uint32));
        temp=n-1;
        
        if(NULL!=ptr2)
        {
            for(counter=0;counter<n;counter++) 
            {
                ptr2[counter]=ptr1[temp];
                temp--;
            }
        }
        else 
        {
            printf("Error! \n");
        }
        
    }
    else 
    {
        printf("Error! \n");
    }
    
    for(counter=0;counter<n;counter++)
    {
        printf("%i ",ptr2[counter]);
    }
    free(ptr1); 
    free(ptr2);  
    ptr1=NULL; 
    ptr2=NULL; 
    return 0;
}
