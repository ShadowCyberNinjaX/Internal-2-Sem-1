#include<stdio.h>
int main()
{
    for(int i=1;i<=4;i++)
    {                                          //32.   1             
        for(int j=1;j<=i;j++)                       // 12
        {                                           // 123  
            printf("%d\t",j);                       // 1234
        }                                           // 123
        printf("\n");                               // 12
    }                                               // 1    

    for(int i=3;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
    return 0;
}