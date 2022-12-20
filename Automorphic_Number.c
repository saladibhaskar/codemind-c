#include<stdio.h>
int main()
{
    int n,sq,c=0,cn=0,rev=0,rev1=0,r,r1;
    scanf("%d",&n);
    sq=n*n;
    while(n!=0)
    {
        r=n%10;
        c++;
        rev=rev*10+r;
        n=n/10;
    }
    while(sq!=0)
    {
        r1=sq%10;
        cn++;
        rev1=rev1*10+r1;
        if(c==cn)
        {
            break;
        }
        sq=sq/10;
    }
    if(rev==rev1)
    {
        printf("Automorphic Number");
    }
    else{
        printf("Not an Automorphic Number");
    }
}