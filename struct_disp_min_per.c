#include<stdio.h>
struct student
{
  int rno;
  char name[20];
  float per; 
}s1[20];
int main()
{
 int i,n,min;
 printf("enter limit::");
 scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      printf("enter rno name per::");
      scanf("%d%s%f",&s1[i].rno,&s1[i].name,&s1[i].per);
   }
   
    min=s1[0].per;
   for(i=0;i<n;i++)
   {  
     if(s1[i].per<min)
     {
      min=s1[i].per;
  }
    }
    
     for(i=0;i<n;i++)
   {
    if(s1[i].per==min)
    {
     printf("\nstudent rno=%d",s1[i].rno);
     printf("\nstudent name=%s",s1[i].name);
     printf("\nstudent per=%f",s1[i].per);
     }
   }
}
