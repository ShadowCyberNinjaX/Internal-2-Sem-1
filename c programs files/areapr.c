#include <stdio.h>
//24.area and perimeter of rectangle using pointer and one function
int rect(float *l,float *w,float *a,float *p) 
{
    *a=*l**w;
    *p=2*(*l+*w);
}

int main() 
{
    float l,w,a,p;
    printf("Enter the length of the rectangle: \n");
    scanf("%f", &l);
    printf("Enter the width of the rectangle: \n");
    scanf("%f", &w);
    rect(&l,&w,&a,&p);
    printf("The area of the rectangle is: %f\n", a);
    printf("The perimeter of the rectange is: %f\n", p);
    return 0;
}