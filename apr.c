#include <stdio.h>
void rectangle(float *l, float *w, float *a, float *p)
 {
    *a= (*l) * (*w);
    *p = 2 * ((*l) + (*w));
}

int main() 
{
    float l, w, a, p;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &l);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &w);
    rectangle(&l, &w, &a, &p);
    printf("Area of the rectangle: %.2f\n", a);
    printf("Perimeter of the rectangle: %.2f\n", p);
    return 0;
}