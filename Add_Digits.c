#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    start:
    int r,sum=0;
    while(n!=0)
    {
        r=n%10;
        sum+=r;
        n=n/10;
    }
    n=sum;
    if(n<10)
    {
        printf("%d",sum);
    }
    else
    {
        goto start;
    }
}