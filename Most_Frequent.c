#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],b[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[a[i]]++;
    }
    int max=0;
    for(i=0;i<10;i++)
    {
        if(b[i]>max)
        {
            max=b[i];
        }
    }
    for(i=0;i<10;i++)
    {
        if(b[i]==max)
        {
            printf("%d",i);
            break;
        }
    }
}