#include<stdio.h>
int main()
{
    int i,j;                                 //29. 1 2 3 4 5
    for(i=0;i<5;i++)                            // 1 2 3 4 5
    {                                           // 1 2 3 4 5
        for(j=1;j<=5;j++)                       // 1 2 3 4 5
        {                                       // 1 2 3 4 5
            printf("%d\t",j);
        }
        printf("\n");
    }
    return 0;
    
}