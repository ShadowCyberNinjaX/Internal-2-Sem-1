#include<stdio.h>
#include<stdlib.h>     // for malloc() function
int square(int i)
{
    int *ptr1;
    ptr1 = (int*) malloc(sizeof(int));   // Allocating memory to ptr1
    *ptr1 = i*i;
    return *ptr1;
}

int main()
{
    int p=square(10);
    printf("%d",p);
    return 0;
}