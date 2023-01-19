#include<stdio.h>
int main()
{
    int n,i,j,s;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&s);
    j=s;
    for(i=0;i<s;i++)
    {
        printf("%d ",a[i]);
        printf("%d ",a[j]);
        j++;
        
    }
    
    
}