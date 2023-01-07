#include<stdio.h>
#include<math.h>
int per(int);
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(per(a[i]))
        {
            sum=sum+a[i];
        }
        
    }
    printf("%d",sum);
}
int per(int n)
{
    int i;
    float m;
    m=sqrt(n);
    i=m;
    if(i==m)
    return 1;
    else
    return 0;
}