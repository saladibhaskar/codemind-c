#include<stdio.h>
int prime(int);
int main()
{
    int n,i,a,b,d,d1;
    scanf("%d",&n);
    for(i=n-1;;i--)
    {
       if(prime(i))
       {
           a=i;
           d=n-a;
           break;
       }
    }
    for(i=n+1;i;i++)
    {
        if(prime(i))
        {
            b=i;
            d1=b-n;
            break;
        }
    }
    if(prime(n))
    {
        printf("0");
    }
    else if(d>d1)
    {
        printf("%d",d1);
    }else
    {
        printf("%d",d);
    }
    {
        
    }
}
int prime(int n)
{
    int f=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            f++;
        }
    }if(f==2)
    {
        return 1;
    }else{
        return 0;
    }
}