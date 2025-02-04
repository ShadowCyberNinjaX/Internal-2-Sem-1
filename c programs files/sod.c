#include<stdio.h>
int main()
{//9.sum of digits of a number
    int n,r,sum=0;
    printf("enter the no.::");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("\nsum of digits=%d\n",sum);
    return 0;
}