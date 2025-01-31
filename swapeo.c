#include<stdio.h>

void inputarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
            scanf("%d",&*(a+i));
    }
}

void printarray(int b[],int n)
{
    for(int i=0;i<n;i++)
    {
            printf("%d\t",*(b+i));
    }
    printf("\n");
}

void interchangeOddEven(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++) 
    {
        if ((*(arr + i) % 2 == 0 && *(arr + i + 1) % 2 != 0) ||  
            (*(arr + i) % 2 != 0 && *(arr + i + 1) % 2 == 0))   
        {
            int temp = *(arr + i);
            *(arr + i) = *(arr + i + 1);
            *(arr + i + 1) = temp;
        }
    }
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("the element of array is:\n");
    inputarray(arr,n);
    printf("the array is:\n");
    printarray(arr,n);
    interchangeOddEven(arr,n);
    printf("Array after interchanging odd and even elements:\n");
    printarray(arr,n);
    return 0;
}
