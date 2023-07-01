#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],cn=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=a[0];i>0;i--)
    {
        cn=0;
        for(int j=0;j<n;j++)
        {
            if(a[j]%i==0)
            {
                cn++;
            }
        }
        if(cn==n)
        {
            printf("%d",i);
            break;
        }
    }
    
}