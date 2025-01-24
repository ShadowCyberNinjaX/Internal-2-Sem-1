#include <stdio.h>

int gcd(int x, int y)
{
    int n1,n2;
   if (x<y)
   {
    n1=x;
    n2=y;
   } 
   else
   {
    n1=y;
    n2=x;
   }
   for(int i=n1; i>=1; i--)
    {
        if(n1%i==0 && n2%i==0)
        {
            return i;
        }
    }
}
int main(){
    int n1,n2;
    printf("Enter number1: ");
    scanf("%d",&n1);
    printf("Enter number2: ");
    scanf("%d",&n2);

    int result = gcd(n1,n2);

    printf("The gcd is %d\n",result);
    return 0;
}