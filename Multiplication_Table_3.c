#include<stdio.h>
int main()
{
    int a,b,c,i;
    scanf("%d%d%d",&a,&b,&c);
    for(i=b;i<=c;i++)
    {
        printf("%d x %d = %d
",a,i,a*i);
    }
}