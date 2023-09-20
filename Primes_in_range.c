#include<stdio.h>
#include<math.h>
    int isPrime(int n)
    {
        if(n==1||n==0)
        {
            return 0;
        }
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
int main()
    {
        int a,b;
        scanf("%d%d",&a,&b);
        int c=0;
        for(int i=a;i<=b;i++)
        {
            if(isPrime(i))
            {
                c++;
            }
        }
        printf("%d",c);
    }