#include<stdio.h>

int main()
{
 int a[100];
int i,j, sum=0,per,n,sub;
char grade;
printf("enter size of array=");
scanf("%d",&n);
printf("\nenter subject marks:\n");
for(i=0;i<n;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
sum=sum+a[i];
a[i+1]=sum;
}
per=sum/n;
a[n+1]=per;
printf("\n your enterd marks and sum\n");

for(i=0;i<n+2;i++)
{
printf("\n%d\t",a[i]);
 if(i<n)
{
 printf("sub");
printf("%d\t",(i+1));
}

else if(i==n)
{
printf("total");
}
else if(i==n+1)
{
printf("per\n");
}


}
printf("your percentage is=%d\n",per);
printf("your total marks=%d\n",sum);
if(per>70)
{
 grade='A';
}
else if(per>60&&per<70)
{
grade='b';
}
else if(per>50&&per<60)
{
grade='c';
}
else if(per>35&&per<50)
{
grade='d';
}
switch(grade)
{
case 'A':
{

printf("grade=A");
 break;
}
case 'b':
{
printf("grade=b");
break;
}
case'c':
{
printf("grade=c");
break;
}
case'd':
{
printf("grade=d");
break;
}
default:
{
printf("fail");
break;
}

}

return 0;
}

    