#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	scanf("%[^
]s",s);
	int l=0,i,j,t;
	for(i=0;s[i]!=NULL;i++);
	l=i;
	i=0;
	j=l-1;
	while(i<j)
	{
		t=s[i];
		s[i]=s[j];
		s[j]=t;
		i++;
		j--;
	}
	printf("%s",s);
}