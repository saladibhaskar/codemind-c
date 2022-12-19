#include<stdio.h>
int main()
{
    
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            printf("0 ");
        }
    }for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            printf("1 ");
        }
    }
}