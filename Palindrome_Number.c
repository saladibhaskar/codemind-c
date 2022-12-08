#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int m,t,r,rev=0;
        scanf("%d",&m);
        t=m;
        while(m!=0)
        {
            r=m%10;
            rev=rev*10+r;
            m=m/10;
            
        }
        if(rev==t)
        {
            printf("True
");
        }else{
            printf("False
");
        }
    }
}