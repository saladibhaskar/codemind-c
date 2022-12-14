#include<stdio.h>
int main()
{
    int m,n,i;
    scanf("%d%d",&m,&n);
    int max=m>n?m:n;
    for(i=max;i>0;i--)
    {
        if(n%i==0&&m%i==0)
        {
            printf("%d",i);
            break;
        }
    }
}