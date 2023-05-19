 #include<stdio.h>
int self(int);
int main()
{
    int n,i,m;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        if(self(i))
        {
            printf("%d ",i);
        }
    }
    
}
int self(int n)
{
    int t,r,c=0,cn=0;
    t=n;
    while(n!=0)
    {
        r=n%10;
        c++;
        if(r==0)
        {
            break;
        }
        if(t%r==0)
        {
            cn++;
        }
        n=n/10;
    }
    if(c==cn)
    {
        return 1;
    }else{
        return 0;
    }
}