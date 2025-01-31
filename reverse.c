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

void reverseArray(int arr[], int n)
{
    int *start=arr;        
    int *end=arr+n-1;
    while(start<end)
    {
        int temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
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
    reverseArray(arr,n);
    printf("the reverse array is:\n");
    printarray(arr,n);
    return 0;
}
