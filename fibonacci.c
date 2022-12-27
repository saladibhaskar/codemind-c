#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,c=0,cn=0;
    scanf("%d",&n);
    printf("0 ");
    printf("1 ");
    while(cn<n-2)
    {
        c=a+b;
        if(cn<=n-2){
        printf("%d ",c);}
        cn++;
        a=b;
        b=c;
    }
}