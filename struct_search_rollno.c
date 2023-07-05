#include<stdio.h>
  struct student
{
  int rno;
  char name[20];
  float per; 
}s1[20];
int main()
{
 int i,n,r;
 printf("enter limit::");
 scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      printf("enter rno name per::");
      scanf("%d%s%f",&s1[i].rno,&s1[i].name,&s1[i].per);
   }
   printf("enter rollno to search ::");
   scanf("%d",&r);
   for(i=0;i<n;i++)
   {
    if(s1[i].rno==r)
    {
     printf("\nstudent rno=%d",s1[i].rno);
     printf("\nstudent name=%s",s1[i].name);
     printf("\nstudent per=%f",s1[i].per);
     break;

    }
    if(i==n)
    {
     printf("record not found...");
      
 }
    
   }
}
