#include<stdio.h>
int main()
{
    int n,r,rev=0,t;
    scanf("%d",&n);
    t=n%1000;
    int s=n/1000;
    printf("%d",s);
    while(t!=0)
    {
        r=t%10;
        rev=rev*10+r;
        t=t/10;
    }
    printf("%d",rev);
}