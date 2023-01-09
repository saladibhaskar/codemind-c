#include<stdio.h>
int main()
{
    int n,i;
    char a[100];
    scanf("%s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]==46)
        {
            printf("[.]");
        }
        else
        {
            printf("%c",a[i]);
        }
    }
}