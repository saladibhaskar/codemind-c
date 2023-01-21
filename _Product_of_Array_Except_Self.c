#include<stdio.h>
int main()
{
    int n,i,j,pr=1;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        pr=1;
        for(j=0;j<n;j++)
        {
           if(j!=i)
           {
               pr=pr*a[j];
           }
        }
        printf("%d ",pr);
    }
}