#include<stdio.h>
#include<math.h>
int main()
{//6.armstrong no.  wrt range
    int n,j,k,a,i=0,r,sum=0;
    printf("enter a no.:");
    scanf("%d",&n);
    j=n;
    a=n;
    k=n;
    while(a>0)
    {
            a=a/10;
            i++;
    }
    while(j>0)
    {
        r=j%10;
        sum=sum+pow(r,i);
        j=j/10;
    }
    if(sum==k)
    {
        printf("%d is a Armstrong number\n",k);
    }
    else
    {
        printf("%d is not a Armstrong number\n",k);
    }
    return 0;
}