#include<stdio.h>
int main()
{                                                   //16. 1+2+3+4+5+6+7+8+9+10+.........+n 
    //28.sum of n natural nos +  FLOWCHART
    int x,i,sum=0;
    printf("enter the range:");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        printf("\t%d+",i);
        sum=sum+i;
    }
    printf("\n\n result:%d",sum);
    return 0;
}