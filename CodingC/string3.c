#include<stdio.h>

int main()
{
  char a[100];
printf("enter name:=");
fgets(a,sizeof(a),stdin);
printf("Lenth of string=%d",strlen(a));
return 0;
}
