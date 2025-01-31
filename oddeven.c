#include <stdio.h>
void oddeven(int n)
{
    if(n%2==0)
    {
        printf("The number %d is even.\n", n);
    } 
    else 
    {
        printf("The number %d is odd.\n", n);
    }
}

int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    oddeven(n);
    return 0;
}