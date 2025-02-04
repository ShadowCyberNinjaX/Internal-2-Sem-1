#include<stdio.h>
//13.multiplication of matrix
void inputmatrix(int a[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",*(a + i) + j);
        }
    }
}

void printmatrix(int b[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",*(*(b + i) + j));
        }
        printf("\n");
    }
}

void multi(int m1[3][3],int m2[3][3])
{
    int r[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            r[i][j]=0;
            for(int k=0;k<3;k++)
            {
                r[i][j]+=m1[i][k]*m2[k][j];       
            }
        }
    }
    printmatrix(r);
}

int main()
{
    int m1[3][3],m2[3][3];
    printf("enter the elements of 1st matrix.\n");
    inputmatrix(m1);
    printf("enter the elements of 2nd matrix.\n");
    inputmatrix(m2);
    printf("the matrix is:\n");
    printmatrix(m1);
    printf("the matrix is:\n");
    printmatrix(m2);
    printf("the matrix multiplication is:\n");
    multi(m1,m2);
    return 0;
}
