#include<stdio.h>

int xyz(int*n)
{
int i,j,m,sum=0;
  for(i=1;i<=10;i++)
{ 
    m=*n*i;
   printf("%d*%d=%d\n",*n,i,m);
   sum=sum+m;
}
printf("\nSum of table=%d\n",sum);
return sum;
}
int abc(int*n)
{
 int i=1;
  int sum=0;
  while(i<=*n)
   {
    printf("%d",i);
    if(i<*n)
    {
    printf("+");
    }
     sum=sum+i;
     i++;
     }
     printf ("=%d\n",sum);
    
    }
  int mnp(int*n)
{
 int i,m=1,sum=0;
for(i=1;i<=*n;i++)
{
   printf("%d*",i);
     m=m*i; 
    }
     printf("=%d",m);
    }
    
  
   
int main()
{
 int n;
printf("enter the no");
scanf("%d",&n);
  xyz(&n);
  abc(&n);
  mnp(&n);
}

 
  


   
   
