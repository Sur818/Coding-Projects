#include <stdio.h>
struct person
{
   char name[100];
   int weight;
int rollno;
};
int main()
{
struct person *ptr,array[100];
ptr=&array;
int i,n;
strcpy(ptr->name,"ashwani");
n=strlen(ptr->name);
for(i=0;i<n;i++)
{ 
 printf("%c\n",ptr->name[i]);
}
}



    