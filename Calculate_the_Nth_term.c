#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


int find_nth_term(int n, int a, int b, int c) 
{
    int temp;
    static int counter=3;
    
    if(1==n) return a;
    if(2==n) return b;
    if(3==n) return c;
    
    temp=a+b+c;
    counter++;
    
    if(n!=counter) temp=find_nth_term(n, b, c, a+b+c);
   
    return temp;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
    
    printf("%d", ans); 
    return 0;
}


