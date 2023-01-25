#include<stdio.h>
int main()
{
    int n,i,c=0,v=0;
    char a[100];
    scanf("%[^
]s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            v++;
            if(v==1){
                c=0;
            printf("V");}
        }
        else if(a[i]>=92&&a[i]<=122)
        {c++;
        if(c==1){v=0;
            printf("C");}
        }
    }
}