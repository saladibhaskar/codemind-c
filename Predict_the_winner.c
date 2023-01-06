 #include<stdio.h>
 int main()
 {
     int n,i,s=0,s1=0;
     scanf("%d",&n);
     int a[n];
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
         if(i%2==0)
         s=s+a[i];
         else
         s1=s1+a[i];
     }
     if((s-s1)%4==0)
     printf("X");
     else
     printf("Y");
     
 }