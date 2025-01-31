#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {                                               //31.     1
        for(int j=1;j<=5-i;j++)                     //       12
        {                                               //  123
            printf(" \t");                              // 1234  
        }                                               //12345
        for(int k=1;k<=i;k++)
        {
            printf("%d\t",k);
        }
        printf("\n");
    }
    return 0;
}