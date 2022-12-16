#include<stdio.h>
int fact(int);
int main()
{
    int n,r,t,f=1,i,sum=0,s;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        s=fact(r);
        sum=sum+s;
        n=n/10;
    }
     
    
    if(sum==t)
    {
        printf("The number %d is a strong number",t);
    }else{
        printf("The number %d is not a strong number",t);
    }
}
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}