#include<stdio.h>
int main() 
{//3.lcm of two numbers
    int n1, n2, max, lcm;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    if(n1 > n2)
    {
        max=n1;
    }
    else
    {
        max=n2;
    }
    
    lcm = max;
    while((lcm % n1 != 0)||(lcm % n2 != 0)) 
    {
        lcm += max;
    }
    printf("The L.C.M. of %d and %d is %d.", n1, n2, lcm);
    return 0;
}