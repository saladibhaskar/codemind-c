#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,c,d,rev=0,r,a,b,rev1=0,r1;
    scanf("%d%d",&n,&m);
    c=pow(10,m);
    a=n%c;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    d=pow(10,m);
    b=rev%d;
    while(b!=0)
    {
        r1=b%10;
        rev1=rev1*10+r1;
        b=b/10;
    }
    if((a-rev1)>0)
    {
    printf("%d",a-rev1);
    }else
    {
        printf("%d",rev1-a);
    }
    
}