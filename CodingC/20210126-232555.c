#include<stdio.h>
#include<stdlib.h>
struct ser
{
int sum;
}*ptr,ser;
int main()
{
ptr=&ser;
int i,n;
printf("inter range");
scanf("%d",&n);
ptr=(struct ser*)malloc(sizeof(struct ser));
if(ptr=='NULL')
{
printf("no memory allocated");
}
else
{
for(i=1;i<=n;i++)
{
ptr->sum=ptr->sum+i;
}
}
printf("%d",ptr->sum);
return 0;
}

