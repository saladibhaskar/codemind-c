#include<stdio.h>
int main()
{
    int n,i,r,sum=0;
    scanf("%d",&n);
    int t=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==t)
    {
        printf("True");
    }else{
        printf("False");
    }
}