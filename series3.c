#include<stdio.h>
long factorial(int n) 
{
    long fact=1;                    //19. (1/1!) + (2/2!) + (3/3!) + ……. + (n/n!)
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}

int main() 
{
    int n;
    float sum=0.0;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        sum+=(float)i/factorial(i);
    }
    printf("Sum of the series: %.3f\n",sum);
    return 0;
}