#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,l=0,t;
    char a[100],b[100];
    scanf("%[^
]s",a);
    scanf(" %[^
]s",b);
    l=strlen(a);
    for(i=0;a[i]!=NULL;i++)
    {
       a[l]=b[i];
       l++;
    }
    
    for(i=0;a[i]!=NULL;i++)
    {
        for(int j=i+1;a[j]!=NULL;j++)
        {
            if(a[j]<a[i])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("%s",a);
    
}