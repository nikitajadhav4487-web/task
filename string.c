#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
	char s[20];
	printf("enter the string\n");
	scanf("%[^\n]",s);

	int len=strlen(s);
int i;
	for(i=0,len=len-1;i<len;i++,len--)
	{
		if(s[i]!=s[len])
			break;
	}
	if(s[i] == s[len])
		printf("string is palindrom\n");
	else
		printf("String is not palindron\n");
}

