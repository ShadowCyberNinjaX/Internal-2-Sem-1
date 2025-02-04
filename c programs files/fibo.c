#include<stdio.h>
//7.fibonacci series generator in terms of range
void fibo(int n);
int main()
{
    int n;
    printf("Enter the range: \n");
    scanf("%d",&n);
    fibo(n);
    return 0;
}

void fibo(int n)
{
    int a=0,b=1,c=1;
    printf("Fibonacci Series: %d\t", a);
    while(c<=n)
    {
        printf("%d\t",c);
        c=a+b;
        a=b;
        b=c;
    };
}