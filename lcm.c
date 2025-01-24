/*#include<stdio.h>
int lcmf(int a,int b);
int main()
{
    int n1,n2;
    printf("Enter the 1st no.: ");
    scanf("%d ",&n1);
    printf("Enter the 2nd no.: ");
    scanf("%d ",&n2);
    int lcm;
    lcm = lcmf(n1,n2);
    printf("The LCM of %d and %d is %d\n",n1,n2,lcm);
    return 0;
}

int lcmf(int a,int b)
{
    int lcm=0;
    if(a>b)
    {
        lcm = a;
    }
    else
    {
        lcm = b;
    }

    while(lcm%a==0 && lcm%b==0)
    {
        lcm+=a;
    }
    return lcm;
}*/

#include<stdio.h>
int lcmf(int a,int b);
int gcd(int x,int y);
int main()
{
    int n1,n2;
    printf("Enter the 1st no.: ");
    scanf("%d ",&n1);
    printf("Enter the 2nd no.: ");
    scanf("%d ",&n2);
    int lcm;
    lcm = lcmf(n1,n2);
    printf("The LCM of %d and %d is %d\n",n1,n2,lcm);
    return 0;
}

int lcmf(int a,int b)
{
    int lcm=0;
    lcm=(a*b)/gcd(a,b);
    return lcm;
}
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