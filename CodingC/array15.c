#include<stdio.h>

int main()
{
  int i,n;
int a,b,c;
printf("enter two no");
scanf("%d,%d",&a,&b);
char x[5]={'+','-','/','*'};
 printf("enter the indexing");
 scanf("%d",&n);
    if(x[n]=='+')
    {
     c=a+b;
    printf("%d",c);
    }
   else if(x[n]=='-')
{
 c=a-b;
printf("%d",c);
}
else if(x[n]=='*')
{
c=a*b;
printf("%d",c);
}
else if(x[n]=='/')
{
c=a/b;
printf("%d",c);
}
else if(n>3)
{
printf("enter valid indexing according to arry size");
}
return 0;
}
      
     
    
    
    
    