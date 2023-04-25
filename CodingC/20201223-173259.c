#include<stdio.h>
int main()
{
int a,b,c,d,e,sum=0;
float per;
printf("enter five sub mark");
scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
sum=a+b+c+d+e;
per=sum/5;
printf("your per is %d\n",per);
if(per>80)
{
printf("grade =A");
}
else if(per>70&&per<80)
{
printf("grade=B");
}
else if(per>50&&per<60)
{
printf("grade=C");
}
else
{
printf("fail");
}
return 0;
}