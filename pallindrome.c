#include<stdio.h>
int main()
{//8.pallindrome number checker
    int n,n1,r,rev=0;
    printf("enter the no.::");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    if(rev==n1)
    {
        printf("\n the no. is pallindrome number.\n");
    }
    else
    {
        printf("\n the no. is not pallindrome number.\n");
    }
    return 0;
}