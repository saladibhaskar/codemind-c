#include<stdio.h>
int prime(int);
int pal(int);
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        if(prime(i)&&pal(i))
        {
            printf("%d",i);
            break;
        }
    }
}
int prime(int n)
{
    int f=0;
    for(int j=1;j<=n;j++)
    {
        if(n%j==0)
        {
            f++;
        }
    }
    if(f==2)
    {
        return 1;
    }else{
        return 0;
    }
}
int pal(int s)
{
    int r,rev=0,t;
    t=s;
    while(s!=0)
    {
        r=s%10;
        rev=rev*10+r;
        s=s/10;
    }
    if(rev==t)
    {
        return 1;
    }else{
        return 0;
    }
}