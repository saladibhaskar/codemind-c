#include<stdio.h>
int main()
{
    int n,i,z=0,o=0;
    char s[20];
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='z')
        {
            z++;
        }
        else
        {
            o++;
        }
    }
    if(o==2*z)
    {
        printf("Yes");
    }else
    
    {
        printf("No");
    }
}