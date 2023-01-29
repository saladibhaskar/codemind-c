#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int j;
    for(i=1;i<10;i++)
    {
        c=0;
      for(j=0;j<n;j++)
      {
          if(a[j]!=i)
          {
              c++;
          }
      }
      if(c==n)
      {
          printf("%d",i);
          break;
      }
    }
}