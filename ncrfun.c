#include<stdio.h>
int fact(int n)
{
    if(n==0)
    return 1;
    else
    return n*fact(n-1);
}
int main()
{
    int n,r,ncr;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter r: ");
    scanf("%d",&r);
    ncr=fact(n)/(fact(r)*fact(n-r));
    printf("the result is: %d",ncr);
    return 0;
}