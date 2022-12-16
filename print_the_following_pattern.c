#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=65;i<=64+n;i++)
    {
        for(j=65;j<=64+n;j++)
        {
            printf("%c ",i);
        }
        printf("
");
    }
}