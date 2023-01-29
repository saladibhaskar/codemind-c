#include<stdio.h>
int main()
{
    int n,i,t,c=0;
    scanf("%d",&n);
    int a[n],b[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
       // printf("%d ",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=a[i+1]&&a[i]!=a[i-1])
        {
            printf("%d",a[i]);
            c++;
            break;
        }
    }
    if(c==0)
    {
        printf("%d",-1);
    }
     
}