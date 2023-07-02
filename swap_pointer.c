#include<stdio.h>
int main()
{
	int a,b;
	void swap(int *a,int *b);
	printf("Enter two Number:");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("\n First number=%d",a);
	printf("\n Second number=%d",b);
}
 void swap(int *a,int *b)
 {
 	int t=*a;
 	*a=*b;
 	*b=t;
 }
