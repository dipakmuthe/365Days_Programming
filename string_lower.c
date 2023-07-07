#include<stdio.h>
#include<string.h>
int main()
{
	int i,length;
	char string[]="This is A String";
	
	length=strlen(string);
	
	for(i=0;i<length;i=i+1)
	{
		string[i]=tolower(string[i]);
	}
	printf("%s\n",string);
}
