#include<stdio.h>
int main()
{
    int i,b,n,c=0;
    scanf("%d%d",&n,&b);
    int a[n][b];
    for(i=0;i<n;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        int max=0;
        for(int j=0;j<b;j++)
        {
            if(a[j][i]>max)
            {
                max=a[j][i];
            }
        }{
        printf("%d
",max);
        c++;}
        if(c==b)
        {
    break;
        }
    }
}
