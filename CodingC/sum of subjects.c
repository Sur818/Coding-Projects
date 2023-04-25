#include<stdio.h>
int main()
{ 
  int math,physics,chemistry,Engphys,BEE,sum;
  printf("Enter yours math no:-");
  scanf("%d",&math);
  printf("Enter your physics no:-");
  scanf("%d",&physics);
  printf("Enter your chemistry no");
   scanf ("%d",&chemistry);
   printf("Enter your Engphys no:-");
  scanf("%d",&Engphys);
  printf("Enter your BEE no:-");
  scanf("%d",&BEE);
   sum=math+physics+chemistry+Engphys+BEE;
   printf("your sum is %d",sum);
  return 0;
}