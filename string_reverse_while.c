#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="computer";
	char *s=str+7;
	while(s>=str)
	{
		printf("%c",*s);
		s--;
	}
}
