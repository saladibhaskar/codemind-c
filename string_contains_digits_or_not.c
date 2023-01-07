 #include<stdio.h>
 int main()
 {
     int n,i;
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         int i,d=0;
         char a[100];
         scanf("%s",a);
         for(i=0;a[i]!=NULL;i++)
         {
             if(a[i]<=57&&a[i]>=48)
             {
                 d++;
                 break;
             }
         }
         if(d>0)
         {
             printf("Yes
");
         }
         else
         {
             printf("No
");
         }
     }
 }