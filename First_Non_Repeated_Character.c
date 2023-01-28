#include<stdio.h>
int main()
{
    int s,k;
    scanf("%d",&s);
    for(k=1;k<=s;k++)
    {
    int n,i,c=0,j,cn=0;
    scanf("%d",&n);
    char a[1000];
    scanf("%s",a);
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
            cn++;
            printf("%c
",a[i]);
            break;
        }
    }
    if(cn==0)
    {
        printf("-1
");
    }
}
}