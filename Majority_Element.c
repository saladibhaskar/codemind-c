#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],b[100];    //
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[a[i]]++;
    }
    for(i=0;i<100;i++)
    {
        if(b[i]>n/2)
        {
            printf("%d",i);
            break;
        }
    }
}