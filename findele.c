#include<stdio.h>
//20.search an given element in array
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

int findelement(int arr[],int n,int element)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(*(arr+i)==element)
        {
            count++;
        }
    }
    return count;
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
    int element;
    printf("enter the element u want to find the frequency of:\n");
    scanf("%d",&element);
    if(findelement(arr,n,element)>0)
    {
        printf("Element %d is present with a frequency of %d.\n", element,findelement(arr,n,element));
    }
    else
    {
        printf("Element %d is not present.\n",element);
    }
    return 0;
}
