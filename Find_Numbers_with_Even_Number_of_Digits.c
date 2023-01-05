#include<stdio.h>
int di(int);
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(di(a[i]))
        {
            c++;
        }
        
    }
    printf("%d",c);
}
int di(int n)
{
    int c=0,r;
    while(n!=0)
    {
        r=n%10;
        c++;
        n=n/10;
    }
    if(c%2==0)
    {
        return 1;
    }else{
        return 0;
    }
}