#include<stdio.h>
#include<stdlib.h>
//enter the marks of students 
int main()
{
    int n;
    int avg=0;
    printf("enter the no. of students\n");
    scanf("%d",&n);
    int *marks = (int*)malloc(n*sizeof(int));  //in the heap memory, keeping the marks of n students
    for(int i=0;i<n;i++)
    {
        printf("enter the marks of student %d\n",i+1);
        scanf("%d",&marks[i]);
        
        avg+=*marks+i;
    }
    printf("the avg marks of %d students is: %d",n,avg);
    return 0;
}