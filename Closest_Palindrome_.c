#include<stdio.h>
int pal(int);
int main()
{
	int n,j,d,d2,n1,n2;
	scanf("%d",&n);
	for(j=n-1;;j--)
	{
	if(pal(j))
	{
		d=(n-j);
		n1=j;
		break;
	}
	}
	for(j=n+1;;j++)
	{
		if(pal(j))
		{
			d2=(j-n);
			n2=j;
			break;
		}
	}
	if(d>d2)
	{
		printf("%d",n2);
	}
	else if(d==d2){
		printf("%d %d",n1,n2);
	}else
	{
		printf("%d",n1);
	}
}
int pal(int n)
{
	int i,t,r,rev=0;
	t=n;
	while(n!=0)
	{
	    r=n%10;
	    rev=rev*10+r;
	    n=n/10;
	}
	if(rev==t)
	{
		return 1;
	}else{
		return 0;
	}
}