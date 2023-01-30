#include<stdio.h>
int main()
{
    int s,k;
    scanf("%d",&s);
    for(k=1;k<=s;k++)
    {
        int n,i;
        scanf("%d",&n);
        int a[n-1];
        int t,j;
        for(i=0;i<n-1;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n-1;j++)
            {
                if(a[j]<a[i])
                {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
            }
        }
        for(i=0;i<n-1;i++)
        {
           if(a[i]+1!=a[i+1])
            {
                printf("%d",a[i]+1);
               break;
            }
            
        }
         
        printf("
");
    }
    
}