#include<stdio.h>
//15.determinant of a 3x3 matrix
int determinant(int m[3][3])
{
    int det;
    det=m[0][0]*(m[1][1]*m[2][2]-m[1][2]*m[2][1])
        -m[0][1]*(m[1][0]*m[2][2]-m[1][2]*m[2][0])
        +m[0][2]*(m[1][0]*m[2][1]-m[1][1]*m[2][0]);
    return det;
}

void inputmatrix(int a[3][3])
{
    printf("enter the elements of matrix.\n");
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
    printf("the matrix is:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",*(*(b + i) + j));
        }
        printf("\n");
    }
}

int main()
{
    int m[3][3];
    inputmatrix(m);
    printmatrix(m);
    printf("the determinant of the matrix is: %d",determinant(m));
    return 0;
}