#include<stdio.h>
#include<string.h>
int main()
{
	char s[200];
	int cn=0,i;
	scanf("%[^
]s",s);
	for(i=0;s[i]!=NULL;i++)
	{
		if(s[i]==' ')
		{
			cn++;
		}
	}
	printf("%d",(cn+1));
}