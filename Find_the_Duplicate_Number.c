 #include<stdio.h>
int main()
{
    long int n,i,j;
    scanf("%ld",&n);
    long int a[n],b[10];
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<10;i++)
    {
         for(j=i+1;j<n;j++)
         {
             if(a[i]==a[j]){
             printf("%ld",a[i]);
             break;}
         }
    }
    
    
}