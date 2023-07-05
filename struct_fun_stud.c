#include<stdio.h>
struct student
{ 
  int rno;
  char name[20];
};
int main()
{
  struct student s1;

  void disp(struct student s1);
   printf("Enter roll no:"); 
   scanf("%d", &s1.rno); 
   printf("Enter Name:");
   scanf("%s", &s1.name);

   disp(s1);

}
void disp(struct student s1)
{
   printf("\n Roll no=%d",s1.rno);
   printf("\n Name=%s",s1.name); 
}
