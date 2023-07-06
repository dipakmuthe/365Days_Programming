#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20];
	int i,n=0;
	printf(" Enter String :");
	gets(s1);
	for(i=0;s1[i]!='\0';i++)
	{
		n++;
	}
	printf("\n Length of string=%d",n);
}
