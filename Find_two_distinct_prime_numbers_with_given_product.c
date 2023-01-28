#include<stdio.h>
int prime(int);
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      for(j=i+1;j<=n;j++)
      {
          if(prime(i)&&prime(j))
          {
              if(i*j==n)
              {
              printf("%d %d",i,j);
              c++;
              break;
              }
          }
      }
    }
    if(c==0)
    {
        printf("-1");
    }
}
int prime(int n)
{
    int f=0,i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            f++;
        }
    }
    if(f==2)
    {
        return 1;
    }else
    return 0;
}