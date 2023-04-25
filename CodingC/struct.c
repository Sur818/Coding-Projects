#include<stdio.h>
struct book
{
 int id[100][100];
 char title[120][100];
  char auther[120][100];
};
int main()
{
struct book name[100];
int n;
 for(int i=1;i<=5;i++)
{
printf("enter book title:=");
  scanf("%s",&name[i].title);
printf("book id:=");
  scanf("%s",&name[i].id);
printf("book auther:=");
  scanf("%s",&name[i].auther);
} 
printf("enter book no for detail");
scanf("%d",&n);
printf("%s is book title\n",name[n].title);
printf("%s is book id\n",name[n].id);
printf("%s is book auther\n",name[n].auther);
return 0;
}

 