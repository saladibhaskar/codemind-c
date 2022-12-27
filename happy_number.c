#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,sum=0;
    scanf("%d",&n);
    start:
    sum=0;
    while(n>0)
    {
       r=n%10;
       sum=sum+r*r;
       n=n/10;
    }
    n=sum;
    if(n==1||n==7)
    {
        printf("True");
    }
    else if(sum<10)
    {
        printf("False");
    }else{
        goto start;
    }
}