#include <stdio.h>
struct person
{
   char name[100];
   int weight;
int rollno;
};
int main()
{
struct person *ptr,stu;
ptr=&stu;
//printf("enter name:-");
//scanf("%s",ptr->name);
strcpy(ptr->name,"Rohit");
printf("enter weight");
scanf("%s",&ptr->weight);
printf("enter roll no");
scanf("%s",&ptr->rollno);

printf("\n%s",(*ptr).name);
}


    