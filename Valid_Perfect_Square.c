#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int s,i;
        float sq;
        scanf("%d",&s);
        sq=sqrt(s);
        i=sq;
        if(sq==i)
        {
            printf("True
");
        }else{
            printf("False
");
        }
    }
}