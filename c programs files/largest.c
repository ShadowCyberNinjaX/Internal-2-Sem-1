#include<stdio.h>
//10.largest number from 3x3 matrix
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

void largest(int d[3][3])
{
    int *ptr, largest;
    ptr = &d[0][0];
    largest = *ptr;
    for (int i = 0; i <3; i++) {
        for (int j = 0; j <3; j++) {
            if (*ptr > largest) {
                largest = *ptr;
            }
            ptr++;
        }
    }
    printf("The largest number in the matrix is: %d\n", largest);

}

int main()
{
    int c[3][3];
    printf("enter elements for the matrix:\n");
    inputmatrix(c);
    printf("the matrix is:\n");
    printmatrix(c);
    largest(c);
    return 0; 
}
