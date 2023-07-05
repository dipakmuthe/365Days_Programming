#include<stdio.h>
#include<string.h>
struct student 
{
  int rno; 
  char sname[20];
  float per ;
}s1; 
 void disp();
int main()
{

  printf("Enter rno sname per :");
  scanf("%d%s%f",&s1.rno,&s1.sname,&s1.per);

  disp();

}
  void disp()
{ printf("\n Roll no=%d",s1.rno);
  printf("\n Name=%s",s1.sname);
  printf("\n per=%f",s1.per);
}
