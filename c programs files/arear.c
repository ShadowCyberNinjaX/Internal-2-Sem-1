#include <stdio.h>
//34.area of rectangle
int area(int l,int w) 
{
    return l*w;
}

int main() 
{
    int l,w;
    printf("Enter the length of the rectangle: \n");
    scanf("%d", &l);
    printf("Enter the width of the rectangle: \n");
    scanf("%d", &w);
    printf("The area of the rectangle is: %d\n", area(l,w));
    return 0;
}