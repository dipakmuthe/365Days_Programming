#include<stdio.h>
#include<string.h>
 
 struct stud
 {
 	int rno ;
 	char name[20];
 	float per; 
 }s1;
 
  int main()
  {
  	printf("Enter student rno name per :");
  	scanf("%d%s%f",&s1.rno,&s1.name,&s1.per);
 
 	printf("\n student Roll No=%d",s1.rno);
	printf("\n student Name=%s",s1.name);
	printf("\n student Percentag=%f",s1.per);

  }
