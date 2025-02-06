#include <stdio.h>
//26. check if number is even or odd + FLOWCHART
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