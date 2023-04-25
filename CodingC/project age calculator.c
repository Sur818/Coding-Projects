#include<stdio.h>

int main()
{
 int a,b,c,m,n,p,x,y,z;
printf("enter your birth year=:");
scanf("%d",&a);
printf("enter your birth month=:");
scanf("%d",&b);
printf("enter your birth date=:");
scanf ("%d",&c);
printf("\n");
printf("enter current year=:");
scanf("%d",&n);
printf("enter current month=:");
scanf("%d",&m);
printf("enter current date=:");
scanf("%d",&p);
if(n%2!=0)
{
if(p<c)
{
if(m<b)
{
if(m%2==1||m==8)
{
 m=m+12;
 n=n-1;
 p=p+31;
 m=m-1;
 x=p-c;
 y=m-b;
 z=n-a;
printf(" date=%d\n",x);
printf(" month=%d\n",y);
printf(" year=%d\n",z);
}
}
else if(m%2==0&&m!=8)
{
if(m!=2)
{
m=m+12;
 n=n-1;
 p=p+30;
 m=m-1;
 x=p-c;
 y=m-b;
 z=n-a;
printf(" date=%d\n",x);
printf(" month=%d\n",y);
printf(" year=%d\n",z);
}
 else if(m==2)
{
m=m+12;
 n=n-1;
 p=p+28;
 m=m-1;
 x=p-c;
 y=m-b;
 z=n-a;
printf(" date=%d\n",x);
printf(" month=%d\n",y);
printf(" year=%d\n",z);
}
}
else 
{
p=p+30;
m=m-1;
x=p-c;
y=m-b;
z=n-a;
printf(" date=%d\n",x);
printf(" month=%d\n",y);
printf(" year=%d\n",z);
}
}
else if(p>c)
{
 if(m<b)
{
m=m+12;
n=n-1;
x=p-c;
y=m-b;
z=n-a;
printf(" date=%d\n",x);
printf(" moth=%d\n",y);
printf(" year=%d\n",z);
}
else
{
x=p-c;
y=m-b;
z=n-a;
printf("date=%d\n",x);
printf(" moth=%d\n",y);
printf(" year=%d\n",z);
}
}
}
if(n%2==0)
{
if(p<c)
{
if(m<b)
{
if(m%2==1||m==8)
{
 m=m+12;
 n=n-1;
 p=p+31;
 m=m-1;
 x=p-c;
 y=m-b;
 z=n-a;
printf(" date=%d\n",x);
printf(" month=%d\n",y);
printf(" year=%d\n",z);
}
}
else if(m%2==0&&m!=8)
{
if(m!=2)
{
m=m+12;
 n=n-1;
 p=p+30;
 m=m-1;
 x=p-c;
 y=m-b;
 z=n-a;
printf(" date=%d\n",x);
printf(" month=%d\n",y);
printf(" year=%d\n",z);
}
 else if(m==2)
{
m=m+12;
 n=n-1;
 p=p+29;
 m=m-1;
 x=p-c;
 y=m-b;
 z=n-a;
printf(" date=%d\n",x);
printf(" month=%d\n",y);
printf(" year=%d\n",z);
}
}
else 
{
p=p+30;
m=m-1;
x=p-c;
y=m-b;
z=n-a;
printf(" date=%d\n",x);
printf(" month=%d\n",y);
printf(" year=%d\n",z);
}
}
else if(p>c)
{
 if(m<b)
{
m=m+12;
n=n-1;
x=p-c;
y=m-b;
z=n-a;
printf(" date=%d\n",x);
printf(" moth=%d\n",y);
printf(" year=%d\n",z);
}
else
{
x=p-c;
y=m-b;
z=n-a;
printf("date=%d\n",x);
printf(" moth=%d\n",y);
printf(" year=%d\n",z);
}
}
}

return 0;
}



 

 
 

