#include<stdio.h>
int main()
{
    int s,k;
    scanf("%d",&s);
    for(k=1;k<=s;k++)
    {
        int n,i,t,c=0,j;
        scanf("%d",&n);
        int a[100];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                    c++;
                    
                }
            }
        }
        if(c==0)
        {
            printf("0
");
        }
        else
        {
            int d;
            d=a[n-1]-a[0];
            printf("%d
",d);
        }
        
    }
}