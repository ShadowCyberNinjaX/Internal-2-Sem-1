#include<stdio.h>
void swap(int *m, int *n)
{
    int c;
    c=*m;
    *m=*n;
    *n=c;
}

int main()
{//swap using functions

    int a,b;
    printf("Enter the two numbers::\n");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("after swapping the nos are %d and %d",a,b);
    return 0;
}
