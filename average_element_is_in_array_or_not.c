#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        sum=sum+a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==sum/n)
        {
            printf("True");
            break;
        }
    }
        if(sum/n!=a[i]){
            printf("False");
        }
    
}