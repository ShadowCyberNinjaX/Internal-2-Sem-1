#include<stdio.h>
int prime(int a, int b);
int main()
{//find no. of prime numbers between a and b
    int a,b;
    printf("enter the starting point:\n");
    scanf("%d",&a);
    printf("enter the ending point:\n");
    scanf("%d",&b);
    if (a < 2) 
        a = 2;
    prime(a,b);
    return 0;
}

int prime(int a, int b)
{ 
    int count=0, k;
    for(int j=a;j<=b;j++)
    {
        
        k=0;
        for (int i = 2; i <=j/2; i++) 
        {
            if (j % i == 0) 
            {
                k=1;
                break;
            }
        }
        if (k==0)
        {
            count++;
        } 
    }
    printf("the no. of prime are:%d",count);
}