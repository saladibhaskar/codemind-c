#include<stdio.h>
int di(int);
int main()
{
    int n,i,c=0,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]>a[j])
            c++;
        }
        printf("%d ",c);
    }
}