#include<stdio.h>
int main()
{//1.swapping of two numbers without using third variable
    int a,b;
    printf("enter the value of a::\n");
    scanf("%d",&a);
    printf("enter the value of b::\n");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping the value of a is %d\n the value of b is %d.",a,b);
    return 0;
}