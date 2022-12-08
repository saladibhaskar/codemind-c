#include<stdio.h>
#include<math.h>
int main()
{
    int n,s;
    float i;
    scanf("%d",&n);
    i=sqrt(n);
    s=i;
    if(i==s)
    {
        printf("True");
    }else{
        printf("False");
    }
}
