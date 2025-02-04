#include<stdio.h>
#include<math.h>
int main()
{
    int x,n,term =0,i,sum=0;
    printf("enter the range:");                //18. x-2x^2+3x^3-4x^4+5x^5-6x^6+7x^7-8x^8+9x^9-10x^10+.........(+-)nx^n
    scanf("%d",&n);
    printf("enter the value of variable:\n");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {
        term=(pow((-1),i-1)*i)*pow(x,i);
        printf("\t%d+",term);
        sum=sum+term;
    }
    printf("\n\n result:%d",sum);
    return 0;
}