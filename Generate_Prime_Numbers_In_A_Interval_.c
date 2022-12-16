#include<stdio.h>
int prime(int);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(prime(i))
        {
            printf("%d
",i);
        }
    }
    
}
int prime(int n)
{
    int i,f=0;
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
    }else{
        return 0;
    }
}