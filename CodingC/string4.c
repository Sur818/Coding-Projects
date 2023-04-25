#include<stdio.h>

int main()
{
  char a[100];
char b[100];
char c[100];
int m,n;
printf("enter name:=");
fgets(a,sizeof(a),stdin);
printf("enter name:=");
fgets(b,sizeof(b),stdin);
printf("enter name:=");
fgets(c,sizeof(c),stdin);
 m=strcmp(a,b);
n=strcmp(a,c);
printf("%d\n",m);
printf("%d\n",n);
return 0;
}
