#include<stdio.h>
#include<stdlib.h>
struct emp
{
int no;
char name[100];
float salery;
}*ptr;
int main()
{
ptr=(struct emp*)malloc(sizeof(struct emp));
if(ptr=='NULL')
{
printf("no memory allocated");
}
else
{
printf("enter emp no,name, salery");
scanf("%d %s %f",&ptr->no,&ptr->name,&ptr->salery);
printf("%d",ptr->no);
}
return 0;
}

