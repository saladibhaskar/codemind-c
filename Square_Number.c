#include<stdio.h>
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i*i+j*j==n)
            {
                c++;
                 
            }
        }
    }
    if(c==0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}