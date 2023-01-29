 #include<stdio.h>
 int main()
 {
     int s,k;
     scanf("%d",&s);
     for(k=1;k<=s;k++)
     {
         int n,i=0,r,c=0,cn=0;
         scanf("%d",&n);
         int a[100];
         while(n!=0)
         {
           r=n%10;
           a[i]=r;
          // printf("%d ",a[i]);
           n=n/10;
           i++;
           cn++;
            
         }
         int t;
          for(i=0;i<cn;i++)
          {
              for(int j=i+1;j<cn;j++)
              {
                  if(a[j]<a[i])
                  {
                      t=a[j];
                      a[j]=a[i];
                      a[i]=t;
                  }
              }
          }
          for(i=0;i<cn;i++)
         {
             //printf("%d ",a[i]);
             if(a[i]==0)
             {
                 break;
             }
             if((a[i]+1)==a[i+1])
             {
                 c++;
             }
             
         }
         if(c==cn-1)
         {
             printf("YES
");
         }else
         {
             printf("NO
");
         }
     }
 }