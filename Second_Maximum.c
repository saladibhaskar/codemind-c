#include<stdio.h>
int main()
{
    int s,j;
    scanf("%d",&s);
    for(j=1;j<=s;j++){
    int n,i,a[4];
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
     int max=0,max1=0;
    for(i=0;i<3;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>max1)
        {
            if(a[i]!=max)
        {
            max1=a[i];
        }}
    }
    printf("%d
",max1);
}}