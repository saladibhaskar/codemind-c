#include<stdio.h>
int main()
{
    char a[100];
    int d=0,i;
    scanf("%[^
]s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]>=48&&a[i]<=57)
        {
            d++;
        }
        
    }if(d>0)
    printf("Contains %d digit",d);
    else
    printf("Doesn't contain digit");
}