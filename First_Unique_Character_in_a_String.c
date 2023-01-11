#include<stdio.h>
int main()
{
    int n,i,j,c=0,cn=0;
    char a[100];
    scanf("%[^
]s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        c=0;
        for(j=0;a[j]!=NULL;j++)
        {
            if(a[j]==a[i])
            {
                c++;
            }
        }
        if(c==1)
        {
            printf("%d",i);
            cn++;
            break;
        }
    }
    if(cn==0)
    {
        printf("%d",-1);
    }
    return 0;
}