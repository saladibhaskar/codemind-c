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
    int c=0;
    for(i=0;i<100;i++)
    {
        if(b[i]==i&&i!=0)
        {
           // printf("%d",i);
            c++;
        }
    }
    printf("%d",c);
}