#include <stdio.h>


void update(unsigned int *a,unsigned int *b) {
    unsigned int temp=0;
    temp=*a;
    *a=*a+*b;
    
    if( temp>*b )
    {
        *b=temp-*b;
    }
    else
    {
        *b=*b-temp;
    }
}

int main() {
    unsigned int a, b;
    unsigned int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
