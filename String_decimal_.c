#include<stdio.h>
#include<string.h>
int main()
{
    int n,j;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
    int c=0,i,s;
    char a[100];
    scanf("%s",a);
    s=strlen(a);
    
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]<=57&&a[i]>=48)
        {
            c++;
        }
    }
    if(c==s)
    {
        printf("True
");
    }
    else
{
    printf("False
");
}
}}