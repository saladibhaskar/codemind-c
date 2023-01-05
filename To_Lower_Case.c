 #include<stdio.h>
#include<string.h>
int main()
{
	char s[100],c[100];
	scanf("%[^
]s",s);
	int l=0,i;
	for(i=0;s[i]!=NULL;i++)
	{
		if(s[i]>=65 && s[i]<=90)
		{
			s[i]=s[i]+32;
		}
	}
	printf("%s",s);
}