#include <stdio.h>
int main()
{
    float f;
    int c= 10;
    while (f<100)
    {
        f = (c * 9 / 5) + 32;
        printf("Your Fahrenheit temp is %.2f\n", f);
        c += 10;
        if (f >= 100)
            break;
    }
    return 0;
}
