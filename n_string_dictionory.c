#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20][20],t[20];
	int i,j,n;
	printf("Enter limit :");
	scanf("%d",&n);
	printf("Enter n names :");
	for(i=0;i<n;i++)
	{
		scanf("%s",&s1[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(strcmp(s1[i],s1[j])<0)
			{
				strcpy(t,s1[i]);
				strcpy(s1[i],s1[j]);
				strcpy(s1[j],t);				
			}
		}
	}
	printf("\n Names in sorted=");
	for(i=0;i<n;i++)
	printf("%s",s1[i]);
}
