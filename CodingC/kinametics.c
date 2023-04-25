#include<stdio.h>
#include<math.h>
int main()
{ int u,t,a,v;
  float s;
   printf("Enter value of u t a)=");
  scanf("%d,%d,%d",&u,&a,&t);
   s=u*t+1/2*a*t^2;
   v=u+a*t;
   printf(" your distance cover is%f",s);
  printf("\nfinal velocity is %d",v);
  int Sn,n;
  printf("\n write the time in which you want to calculate cover distance=");
   scanf("%d",&n);
   Sn=u+1/2*a*(2*n-1);
   printf("\ndistance covered in nth second %d",Sn);
  return 0;
}