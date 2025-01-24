#include<stdio.h>
int main()
{//find no. of prime numbers between 1 to 100
  int n, i,k,count=0;
  for(int j=2;j<=100;j++)
  {
    k=0;
  for (i = 2; i <= j/ 2; i++) 
  {
    if (j % i == 0) 
    {
      k=1;
      break;
    }
  }
  if (k==0)
  {
    count++;
  } 
  }
  printf("the no of prime are:%d",count);
  return 0;
}