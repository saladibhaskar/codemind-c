#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0&&(i==3||i==5||i==7))
        {
            c++;
            if(i==3)
            {
                printf("Pling");
            }
            else if(i==5)
            {
                printf("Plang");
            }
            else if(i==7)
            {
                printf("Plong");
            }
        }
    }
    if(c==0)
    {
        printf("%d",n);
    }
    
}