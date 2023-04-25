#include <stdio.h>
struct person
{
   char name[100][100];
   int weight;
int rollno;
};
int main()
{
struct person *ptr,array[100];
ptr=&array;
int i,n,j;
printf("how many name want to enter");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter name:-");
scanf("%s",&ptr->name[i]);
}
for(j=0;j<n;j++)
{ 
 printf("%s\n",ptr->name[j]);
}
}



    