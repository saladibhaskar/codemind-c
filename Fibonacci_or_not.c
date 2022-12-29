#include<stdio.h>
int main()
{
    int n,a=0,b=1,c=0;
    scanf("%d",&n);
    while(c<=n)
    {
        c=a+b;
        if(c==n)
        {
            break;
        }
        a=b;
        b=c;
        
    }
    if(c==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}