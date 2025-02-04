#include<stdio.h>
//27.factorial of a number
long factorial(int n) 
{
    long fact=1;                    
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}

int main()
{
    int n;
    printf("Enter a number:\n ");
    scanf("%d",&n);
    printf("the factorial is: %ld",factorial(n));
    return 0;
}