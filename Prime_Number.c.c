#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the NUmber :");
	scanf("%d",&n);

	for(i=2;i<n;i++)
    {
    	 if(n%i==0)
		 break;
	}
	if(i==n)
	printf("Number is Prime....");
	else 
	printf("Number is Not Prime");
}
