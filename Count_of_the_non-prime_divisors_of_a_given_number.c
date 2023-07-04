#include<stdio.h>
int prime(int);
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(!prime(i))
            {
                c++;
            }
        }
    }
    printf("%d",c);
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
    }
    if(f==2)
    {
        return 1;
    }else
    {
        return 0;
    }
}
