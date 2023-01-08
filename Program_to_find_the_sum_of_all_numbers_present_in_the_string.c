#include<stdio.h>
int main()
{
    int i,sum=0;
    char a[100];
    scanf("%[^
]s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]>=48&&a[i]<=57)
        {
            //printf("%d ",a[i]);
            sum=sum+a[i]-48;
        }
    }
    printf("%d",sum);
}