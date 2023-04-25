#include<stdio.h>

int main()
{ 
  char ch;
 printf("Enter the operation");
  scanf("%c",&ch);
  switch(ch)
  {
   case'+':
     { 
       int n,a,i,d,sum=0;
     printf("enter the last no of ser");
      scanf("%d",&n);
    printf("\nenter common difference");
    scanf("%d",&d);
      printf("\nenter first term of ap");
      scanf("%d",&a);
      i=a;
      while(i<=n)
       {
      printf("%d+",i);
      sum=sum+i;
  
       i+=d;
       }
       printf("\nyour sum is %d",sum);
       break;
    }
     case'*':
    
    { 
      int n,j,a,r,prod=0;
      printf("enter last no of gp");
       scanf("%d",&n);
    printf("\n enter first term");
      scanf("%d",&a);
      printf("\nenter common ratio");
     scanf("%d",&r);
     j=a;
     for(j=a;j<=n;j=j*r)
      {
     printf("%d+",j);
      prod=prod+j*r;
      }
      printf("\nyour sum of gp is %d",prod);
    break;
    }
    }
    return 0;
    }
    
     
    
     
    
    
