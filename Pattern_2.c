#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(int j=2;j<=i;j++)
        {
            printf("*");
        }
        printf("*
");
    }
}