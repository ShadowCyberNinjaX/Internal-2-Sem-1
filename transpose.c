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


void transpose(int arr[3][3],int transpose[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            *(*(transpose+j)+i)=*(*(arr+i)+j);
        }
    }
}

int issymmetric(int arr[3][3],int transpose[3][3])
{
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            if (arr[i][j] != transpose[i][j]) 
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int arr[3][3],trans[3][3];
    printf("the element of array is:\n");
    inputmatrix(arr);
    printf("the array is:\n");
    printmatrix(arr);
    transpose(arr,trans);
    printf("the transpose matrix is:\n");
    printmatrix(trans);
    if(issymmetric(arr,trans))
    {
        printf("the matrix is symmetric\n");
    }
    else
    {
        printf("the matrix is not-symmetric\n");
    }
    return 0;
}
