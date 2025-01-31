#include<stdio.h>
void inputmatrix(int a[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",*(a+i)+j);
        }
    }
}

void printmatrix(int b[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",*(*(b+i)+j));
        }
        printf("\n");
    }
}


int summatrix(int a[3][3], int b[3][3], int c[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            *(*(c+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
        }
    }
    return c[3][3];
}

int main()
{
    int m1[3][3],m2[3][3],sum[3][3];
    printf("the element of 1st matrix is:\n");
    inputmatrix(m1);
    printf("the element of 2nd matrix is:\n");
    inputmatrix(m2);
    printf("the 1st matrix is:\n");
    printmatrix(m1);
    printf("the 2nd matrix is:\n");
    printmatrix(m2);
    printf("The sum of two matrices is:\n");
    summatrix(m1,m2,sum);
    printmatrix(sum);
   return 0; 
}
