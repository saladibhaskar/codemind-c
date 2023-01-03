#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int a[n];
    i=0;
    start:
    scanf("%d",&a[i]);
    sum=sum+a[i];
    i++;
    if(i<n)
    {
        goto start;
    }
    printf("%d",sum);
}