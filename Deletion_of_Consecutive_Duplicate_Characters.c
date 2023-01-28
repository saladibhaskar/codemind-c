#include<stdio.h>
#include<string.h>
int main()
{
    int s,k;
    scanf("%d",&s);
    for(k=1;k<=s;k++)
    {
    int n,i,j,c=0,l=0,l1=0;
    char a[100],b[100];
    scanf("%s",a);
    for(i=0;a[i]!=NULL;i++)
    {
       if(a[i]==a[i+1]) 
       {
           c++;
          
       }
         
    }
      
     printf("%d",c);
    printf("
");
}
}