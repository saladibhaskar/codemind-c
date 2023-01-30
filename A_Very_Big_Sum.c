#include<stdio.h>
int main()
{
    long int i;
    int n;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%ld",&ar[i]);
    }
    long int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+ar[i];
    }
    printf("%ld",sum);
}