#include<stdio.h>
#define CAPACITY 5
int stack[CAPACITY];
int top=-1;

void main()
{
 int choice,item,capacity=5;
while(1)
{
printf("enter the choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
Printf("enter the no");
scanf("%d",&item);
push(item);
break;
}
}
}
}

void push(int item)
{
if(isfull())
{
printf("stack is full");
}
else
{
top=top+1;
stack[top]=item;
printf("%d",&item);
}
}
int isfull()
{
if(top=capacity-1)
{
return 1;
}
else
{
return 0;
}
}






    