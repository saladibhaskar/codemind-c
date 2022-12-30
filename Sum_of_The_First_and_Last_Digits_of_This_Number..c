#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
    int m,n,s,t,r,rev=0;
    scanf("%d",&n);
    m=n%10;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    s=rev%10;
    printf("%d
",m+s);
    
}
    
}