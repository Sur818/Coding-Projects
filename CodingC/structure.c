#include<stdio.h>

struct emp
{
 int id;
int age;
int salery;
char name[100];
};
int main()
{
 struct emp emp1;
 emp1.id=20;
 emp1.salery=129366;
  emp1.age=22;
printf("enter emp name");
  gets(emp1.name);
printf("%s",emp1.name);
struct emp emp2;
  emp2.id=123;
  emp2.age=23;
   emp2.salery=123874588;
  printf("enter name");
gets(emp2.name);
puts(emp2.name);
}
    