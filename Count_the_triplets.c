#include<stdio.h>
int main()
{
    int s,k,l;
    scanf("%d",&s);
    for(k=1;k<=s;k++)
    {
        int n,i,j,c=0,x;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
           for(j=i+1;j<n;j++)
           {
               for(l=0;l<n;l++)
               {
                   if(a[i]+a[j]==a[l])
                   {
                       c++;
                   }
               }
           }
            
        }
        if(c==0)
        {
            printf("-1
");
        }else
        printf("%d
",c);
    }
}