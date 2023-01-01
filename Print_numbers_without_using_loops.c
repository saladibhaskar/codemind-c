#include<stdio.h>
int main()
{
     
    int n,a=1;
    scanf("%d",&n);
    if(n>=1&&n<=10000)
    {
    start:
    printf("%d ",a);
    a++;
    if(a<=n)
    {
    goto start;
    }
    }
    else
    {
        printf("The Number Series is Not Possible Print");
    }
    
}