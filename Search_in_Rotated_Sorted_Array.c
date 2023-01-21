#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int s;
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            printf("%d",i);
            c++;
        }
    }if(c==0)
    printf("%d",-1);
}