#include<stdio.h>
int main()
{
    int n,i,j,t,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);   
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
    int k=0,b[100];
    for(i=0;i<n;i++)
    {
        if(a[i]!=a[i+1])
        {
          b[k]=a[i];
         //printf("%d ",b[k]);
          k++;
        
          
        }
    }
    for(i=0;i<k;i++)
    {
        if(k>=3){
         printf("%d ",b[2]);
        break;}
        else
        {
            printf("%d",b[0]);
            break;
        }
    }
}