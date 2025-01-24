#include<stdio.h>
int main()
{
    int marks[5]={90,92,95,85,50},sum=0;
    int *p=marks, *sum_ptr=&sum;
    for(int i=0;i<5;i++)
    {
        *sum_ptr+=*(p+i);
    }
    printf("the sum of the marks is: %d\n",*sum_ptr);
    printf("the average marks is: %d\n",*sum_ptr/5);
    return 0;
}
