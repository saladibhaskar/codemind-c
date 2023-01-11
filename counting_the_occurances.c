#include<stdio.h>
#include<string.h>

int main()
{
    char s[10000];
    scanf("%[^
]s",s);
    char ch[10];
    scanf("%s",ch);
    
    int l=strlen(s);
    int k=0;
    for(int i=0;i<l;i++)
    {
        if(ch[0]==s[i])
        {
            k++;
        }
        
    }
    if(k==0)
    {
        printf("-1");
    }
    else
    printf("%d",k);
    
}