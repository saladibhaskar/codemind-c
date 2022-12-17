#include<stdio.h>
int prime(int);
int main()
{
    int a,b,n,i,c,d;
    scanf("%d%d",&a,&b);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        d=i+c;
        if(prime(d))
        {
            printf("%d",i);
            break;
        }
    }
}
int prime(int n)
{
    int f=0,i;
    for(i=1;i<=n;i++)
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