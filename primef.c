#include<stdio.h>
int main()
{//5.prime factors of a number checker
    int i, j, n, k;
    printf("Enter any number to print Prime factors: ");
    scanf("%d",&n);
    printf("All Prime Factors of %d are: \n",n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            k=0;
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    k=1;
                    break;
                }
            }
            if(k==0)
            {
                printf("%d, ", i);
            }
        }
    }
    return 0;
}