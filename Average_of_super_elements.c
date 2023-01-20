#include<stdio.h>
int main()
{
    long int n,i;
	float sum=0,c=-1;
    scanf("%ld",&n);
    long int a[n],b[10];
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
        b[a[i]]++;
    }
    for(i=0;i<10;i++)
    {
        if(b[i]==i)
        {
            sum=sum+i;
            c++;
        }
    }
     
    if(c>0)
    {
    printf("%.2f",sum/c);
    }
    else
    {
        printf("%d",-1);
    }
    
    
}