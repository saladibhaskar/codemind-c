 #include<stdio.h>
 int main()
 {
     int n,i,s,c=0,cn=0;
     scanf("%d",&n);
     int a[n];
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     scanf("%d",&s);
     for(i=0;i<n;i++)
     {
         if(a[i]==s)
         {
             printf("%d ",i);
             c++;
             break;
         }
     }
     for(i=n;i>=0;i--)
     {
         if(a[i]==s)
         {
             printf("%d ",i);
             break;
             cn++;
         }
     }
     if(c==0&&cn==0)
     {
         printf("-1 -1");
     }
          
 }