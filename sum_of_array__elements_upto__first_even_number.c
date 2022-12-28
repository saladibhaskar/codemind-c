#include<stdio.h>
int main()
{
    int n,i,a[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            break;
        }else{
            sum=sum+a[i];
        }
    }
    printf("%d",sum);
}