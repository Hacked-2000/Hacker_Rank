#include<stdio.h>
#include<string.h>

int main()
{
	char s[1024];
	int i;
	
	scanf("%[^\n]",s);
	
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]==' ')
		{
			printf("\n");
		}
		else{
			printf("%c",s[i]);
		}
	}
	return 0;
}
