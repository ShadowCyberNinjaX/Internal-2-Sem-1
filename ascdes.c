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

void findLargestSmallest(int arr[], int n, int *largest, int *smallest) 
{
    *largest=arr[0];
    *smallest=arr[0];

    for (int i=1;i<n;i++) 
    {
        if (arr[i]>*largest) 
        {
            *largest=arr[i];
        }
        if (arr[i]<*smallest)
        {
            *smallest=arr[i];
        }
    }
}

void ascending(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array in ascending order:\n ");
    printarray(arr,n);
}

void decending(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array in descending order:\n ");
    printarray(arr,n);
}

int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    int largest, smallest;
    printf("the element of array is:\n");
    inputarray(arr,n);
    printf("the array is:\n");
    printarray(arr,n);
    findLargestSmallest(arr, n, &largest, &smallest);
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);
    ascending(arr,n);
    decending(arr,n);
    return 0;
}
