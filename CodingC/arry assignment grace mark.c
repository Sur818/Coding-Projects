#include<stdio.h>

int main()
{
 int a[100];
int i,j,t,k,sum=0,per,n,sub;
char grade;
printf("enter size of array=");
scanf("%d",&n);
printf("\nenter subject marks:\n");
for(i=0;i<n;i++)
{
printf("sub[%d]=",i+1);
scanf("%d",&a[i]);
sum=sum+a[i];
a[i+1]=sum;
}

for(i=0;i<n;i++)
{
for(k=1;k<=5;k++)
{
  if(a[i]<35)
{
   if(a[i]+k>=35)
 {
   a[i]=a[i]+k;
    sum=sum+k;
}
}
}
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


for(t=0;t<n;t++)
{
if(a[t]<35)
{
  printf("fail");
  break;
}

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

}
switch(grade)
{
case 'A':
{
printf("your percentage is=%d\n",per);
printf("your total marks=%d\n",sum);

printf("grade=A");
 break;
}
case 'b':
{
printf("your percentage is=%d\n",per);
printf("your total marks=%d\n",sum);
printf("grade=b");
break;
}
case'c':
{
printf("your percentage is=%d\n",per);
printf("your total marks=%d\n",sum);
printf("grade=c");
break;
}
case'd':
{
printf("your percentage is=%d\n",per);
printf("your total marks=%d\n",sum);
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

    