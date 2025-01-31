#include<stdio.h>
int main()
{//7.fibonacci series upto n
    int sum=0,n,a=1,b=0;
    printf("Enter the range::\n");
    scanf("%d",&n);
    while(sum<=n)
    {
        printf("\t%d",sum);
        sum=a+b;
        b=a;
        a=sum;
    }
    return 0;
}