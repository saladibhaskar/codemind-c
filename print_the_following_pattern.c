#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=64+n;i>=65;i--)
    {
        for(j=i;j>=65;j--)
        {
            printf("%c ",i);
        }
        printf("
");
    }
}