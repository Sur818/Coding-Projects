#include<stdio.h>
int main()
 {
  int p,c,m,Ep,B,sum,per;
  printf ("Enter subjects no");
  scanf("%d %d %d %d %d",&p,&c,&m,&Ep,&B);
   sum=p+c+m+Ep+B;
   per=sum*100/500;
   printf("per= %d",per);
  return 0;
}