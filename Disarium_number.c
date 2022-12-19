#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,rev=0,r,r1,sum=0;
    scanf("%d",&n);
    int t=n;
    while(n!=0)
    {
       r=n%10;
       rev=rev*10+r;
       n=n/10;
    }
    i=1;
    while(rev!=0)
    {
        
        r1=rev%10;
         sum=sum+pow(r1,i);
        rev=rev/10;
        i++;
    }
    if(sum==t)
    {
    printf("True");}
    else{
        printf("False");
    }
}