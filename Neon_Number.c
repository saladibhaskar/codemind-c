#include<stdio.h>
int main()
{
    int n,rem,sq,sum=0,t;
    scanf("%d",&n);
    sq=n*n;
    t=n;
    while(sq!=0)
    {
        rem=sq%10;
        sum=sum+rem;
        sq=sq/10;
        
    }
    if(sum==t)
    {
        printf("Neon Number");
    }else{
        printf("Not Neon Number");
    }
}