#include<stdio.h>
int main()
{
    int n,i,t,j;
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
    int k=0,b[k];
    for(i=0;i<n;i++)
    {
       // printf("%d ",a[i]);
        if(a[i]!=a[i+1])
        {
            b[k]=a[i];
            k++;
        }
    }int c=0;
    if(k>=3)
    {
        printf("%d",a[2]);
    }else
    {
        printf("It is not possible");
    }
}