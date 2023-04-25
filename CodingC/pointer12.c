#include<stdio.h>

int main()
{ 
 int a;
printf("enter no");
scanf("%d",&a);
int*ptr=&a;
if(*ptr%2==0)
{
printf("%d=even no",*ptr);
}
else
{
printf("%d isodd no",*ptr);
}
return 0;
}

  
 
 

