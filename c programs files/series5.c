#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    float x,term =0.0,sum=0.0;
    printf("enter the range:");               //17. x-x^2(1/2)+x^3(1/3)-x^4(1/4)+..........(+-)(1/n)x^n
    scanf("%d",&n);
    printf("enter the value of variable:\n");
    scanf("%f",&x);
    for(i=1;i<=n;i++)
    {
        term=pow(-1,i+1)*(1.0/i)*pow(x,i);
        printf("\t%.5f+",term);
        sum=sum+term;
    }
    printf("\n\n result:%.5f",sum);
    return 0;
}