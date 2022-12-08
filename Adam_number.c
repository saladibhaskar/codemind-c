#include<stdio.h>
 
int revs(int);
int main()
{
    int t,n,sq,sq2,r;
    scanf("%d",&n);
    
    sq=n*n;
    int rs=(revs(n));
    {
        sq2=rs*rs;
    }
    int rs2=(revs(sq2));
    {
        if(sq==rs2)
        {
            printf("True");
        }else
        {
            printf("False");
        }
    }
}
    

int revs(int x)
{
    int r,rev=0;
    while(x!=0)
    {
        r=x%10;
        rev=rev*10+r;
        x=x/10;
        
    }
    return rev;
}