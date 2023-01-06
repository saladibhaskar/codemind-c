#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],c[100],t;
    scanf("%[^
]",s);
    int l=0,i,j;
    strcpy(c,s);
    for(i=0;c[i]!=0;i++)
    {
        l++;
    }
    i=0;
    j=l-1;
    while(i<j)
    {
        t=c[i];
        c[i]=c[j];
        c[j]=t;
        i++;
        j--;
    }
    int k=strcmp(c,s);
    if(k==0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}