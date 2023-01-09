#include<stdio.h>
int main()
{
    int n,i,t,j;
    scanf("%d",&n);
    int a[i];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[j]*a[j]<a[i]*a[i])
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
for(i=0;i<n;i++)
{
    printf("%d ",a[i]*a[i]);
}
}