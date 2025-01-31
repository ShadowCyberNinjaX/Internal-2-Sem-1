#include<stdio.h>
//11.both diagonal sum of 3x3 matrix
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

void diagonal(int a[3][3])
{
    int d1=0,d2=0;
    for(int i=0;i<3;i++)
    {
        d1+=*(*(a+i)+i);
        d2+=*(*(a+i)+(3-i-1));
    }
    printf("the sum of primary diagonal of matrix is:%d\n",d1);
    printf("the sum of secondary diagonal of matrix is:%d\n",d2);
}

int main()
{
    int m [3][3];
    printf("the element of matrix is:\n");
    inputmatrix(m);
    printf("the matrix is:\n");
    printmatrix(m);
    diagonal(m);
    return 0; 
}
