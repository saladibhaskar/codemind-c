  #include<stdio.h>
int prime(int n)
{
    int f=0,i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
          {
              f=1;
              break;
          }
    }
    if(f==0)
      return 1;
    else
       return 0;
}
int main()
{
    int n,d1,d2,i,t,k;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
    scanf("%d",&n);
    for(i=n;;i++)
    {
        int res=prime(i);
        if(res)
          {
              d1=i-n;
              break;
          }
    }
    for(i=n;;i--)
    {
        int res=prime(i);
        if(res)
         {
             d2=n-i;
             break;
         }
    }
    if(d1==d2)
      printf("%d
",n-d1);
    else if(d1>d2)
      printf("%d
",n-d2);
    else
      printf("%d
",n+d1);
    

    }
return 0;
}
