#include <stdio.h>
#include<string.h>
int main()

{ 
    char s1[20][100],name[20];
    int i,n,flag=0;
    printf("Enter limit :");
    scanf("%d",&n);
    printf("Enter n students name:"); 
    for(i=0;i<n;i++)
     {
       gets(s1[i]);
     }
    printf("Enter student name to search:");
    gets(name);
    for(i=0;i<n;i++)
    {
     if(strcmp(s1[i],name)==0)
    {
       flag=1; break;
    }
    }
    if(flag==1)
    printf("Name found...");
    else
    printf("Not found...");
}
