#include<stdio.h>
int main()
{
    int i;
    for(i=1;;i++)
    {
        int n;
        scanf("%d",&n);
        if(n==-1)
        {
            break;
        }
        else
        {
            printf("%d
",n*n);
        }
    }
}
