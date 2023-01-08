#include<stdio.h>
int main()
{
    int n,i,a;
    char s[100];
    scanf("%[^
]s",s);
    scanf("%d%d",&n,&a);
    for(i=0;s[i]!=NULL;i++)
    {
        if(i>=n&&i<=a)
        {
            printf("%c",s[i]);
        }
    }
}