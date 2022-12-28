#include<stdio.h>
int main()
{
    int n,i,sum=0,r;
    scanf("%d",&n);
    start:
    sum=0;
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    n=sum;
    if(n<10)
    {
        printf("%d",sum);
    }
    else{
        goto start;
    }
}