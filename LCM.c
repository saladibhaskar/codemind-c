#include<stdio.h>
int main()
{
    int n,m,max,i;
    scanf("%d%d",&n,&m);
    max=n>m?n:m;//5 6
    for(i=max;;i++)
    {
        if(i%n==0 && i%m==0)
        {
            printf("%d",i);
            break;
            return 0;
        }
    }
}