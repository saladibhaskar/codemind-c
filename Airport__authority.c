#include<stdio.h>
int main()
{
    int n,i,j,s,tc=0,c;
    scanf("%d",&n);
    int a[n],b[10];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(a[i]>s)
        {
            c=2;
        }
        else
        {
            c=1;
        }
        tc=tc+c;
    }
    printf("%d",tc);
    
}