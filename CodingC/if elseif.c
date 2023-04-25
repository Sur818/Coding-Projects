#include<stdio.h>

int main()
{ 
 int a,b,c,D;
  printf("Enter vakye of a,b,c,\n");
  scanf("\n%d\n%d\n%d",&a,&b,&c);
  D=b*b-4*a*c;
 if(D<0)
  {
 printf("roots are img");
  }
 else if(D>0)
{
 printf(" Real and distinct roots");
 }
 else if(D==0)
 { 
  printf("Real and eqaul roots");
  }
  
  
 
  return 0;
}