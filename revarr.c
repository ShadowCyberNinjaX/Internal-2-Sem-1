#include<stdio.h>
//21.reverse the array 
void inputarray(int arr[],int *n)
{
    for(int i=0;i<*n;i++)
    {
        scanf("%d",arr+i);
    }
}
void printarray(int arr[],int *n)
{
    for(int i=0;i<*n;i++)
    {
        printf("%d ",*(arr+i));
    }
}
void swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
void reverse(int arr[],int *n)
{
    int *i=arr,*j=arr+*n-1;
    while(i<j)
    {
        swap(i,j);
        i++;
        j--;
    }
}
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    inputarray(arr,&n);
    printf("The array is:  ");
    printarray(arr,&n);
    reverse(arr,&n);
    printf("\nThe reversed array is:  ");
    printarray(arr,&n);
    return 0;
}