 #include<stdio.h>
 int rev(int);
int main()
{
    int m,n,s,t,r,a,b,c,d;
    scanf("%d",&n);//1234
	t=n;
    m=n%10;//4
    r=rev(n);
    s=r%10;//1
    a=t/10;//123
    b=rev(a);//321
    c=b/10;//32
    d=rev(c);
    printf("%d%d%d",m,d,s);
    
}
int rev(int n)
{
	int r,rev=0;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	return rev;
}