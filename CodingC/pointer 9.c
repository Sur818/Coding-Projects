#include<stdio.h>

void chnagebyvalue (int n)
{
n=100;
}
void changebyadress(int*n)
{
*n=200;
}
int main()
{
int n;
printf("enter no");
scanf("%d",&n);
 chnagebyvalue(n);
  printf("after change value=%d",n);
changebyadress(&n);
printf("\nafter change value=%d",n);
}