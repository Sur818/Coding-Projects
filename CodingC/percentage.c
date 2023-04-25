#include<stdio.h>
int main()
 {
  float p,c,m,Ep,B,sum ,per;
  printf ("Enter subjects no");
  scanf("%f %f %f %f %f",&p,&c,&m,&Ep,&B);
   sum=p+c+m+Ep+B;
   per=(sum*100)/500;
   printf("per=%.2f",per);
  return 0;
}