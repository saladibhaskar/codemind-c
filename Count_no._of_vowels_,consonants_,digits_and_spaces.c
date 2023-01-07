#include<stdio.h>
int main()
{
    char a[100];
    int v=0,c=0,w=0,d=0,i;
    scanf("%[^
]s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        {
            v++;
        }
        else if(a[i]>'a'&&a[i]<'z'||a[i]>'A'&&a[i]<'Z')
        {
            c++;
        }
        else if(a[i]==' ')
        {
            w++;
        }
        else
        {
            d++;
        }
        
    }
    printf("Vowels: %d
Consonants: %d
Digits: %d
White spaces: %d
",v,c,d,w);
}