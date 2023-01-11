#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         char a[100],t,c[100];
         int s,j,l=0,k,x;
         scanf("%s",a);
         for(j=0;a[j]!=NULL;j++)
         {
             l++;
         }
        // printf("%d
",l);
         strcpy(c,a);
         j=0;
         k=l-1;
         while(j<k)
         {
             t=c[j];
             c[j]=c[k];
             c[k]=t;
             j++;
             k--;
         }
         x=strcmp(a,c);
         if( x==0)
         {
             printf("YES");
         }else
         {
             printf("NO");
         }
         if(x==0){
         if(l%2==0)
         {
             printf(" EVEN");
         }else
         {
             printf(" ODD");
         }}
         printf("
");
    }
}