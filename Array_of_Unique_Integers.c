#include<stdio.h>
int main()
{
    int n,i,j,t;
    float sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=1;i<n-1;i++)
    {
        sum=sum+a[i];
    }
    printf("%.5f",sum/(n-2));
}