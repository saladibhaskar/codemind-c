#include<stdio.h>
int fib(int);
int main()
{
    int n,i,p,q,d,d1;
    scanf("%d",&n);
    for(i=n-1;i;i--)
    {
        if(fib(i))
        {
            p=i;
            d=n-p;
            break;
        }
    }
    for(i=n+1;;i++)
    {
        if(fib(i))
        {
            q=i;
            d1=i-n;
            break;
        }
    }
    if(d>d1)
     {
         printf("%d",q);
     }else if(d1==d)
     {
         printf("%d %d",p,q);
     }else{
         printf("%d",p);
     }
}
int fib(int n)
{
    int a=-1,b=1,c=0,x=0;
    while(c<=n)
    {
        c=a+b;
        if(c==n)
        {
         x++;
         break;
        }
        a=b;
        b=c;
    }
    if(x==1)
    return 1;
    else
    return 0;
}