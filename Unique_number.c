#include<stdio.h>
int main()
{
    int n,i=0;
	float sum=0,c=0;
    scanf("%d",&n);
    int a[100],b[10],r;
    while(n!=0)
    {
       r=n%10;
       a[i]=r;
       n=n/10;
       b[a[i]]++;
        i++;
    }
    
    for(i=0;i<10;i++)
    {
        if(b[i]>1)
        {
            c++;
            //printf("%d ",b[i]);
        }
    }
if(c==0)
{
    printf("Unique Number");
}else
{
    printf("Not Unique Number");
}
    
    
}