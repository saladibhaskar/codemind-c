#include<stdio.h>
int main()
{
    int s,k;
    scanf("%d",&s);
    for(k=1;k<=s;k++)
    {
        int n,i,j,max=0,c=0,r=0;
        scanf("%d",&n);
        int a[n],b[10];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        j=1;
        for(i=0;i<n;i++)
        {
           if(a[i]==a[i+1])
           {
               r++;
           }
           {if(a[i]>max)
           {
               max=a[i];
               if(a[i]>a[i+1])
               {
                 c++;
               }
           }}
           j++;
        }
        printf("Case #%d: ",k);
        if(r==n-1)
        {
            printf("0
");
        }
        else if(max==a[n-1]&&c==0)
        {
            printf("%d
",1);
        }
        else{
        printf("%d
",c);}
    }
}