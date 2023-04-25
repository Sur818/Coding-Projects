#include<stdio.h>

int main()
{
  char a[100];
char b[100];
char c[100];
 printf("enter first string:");
gets(a);
 printf("enter two string:");
gets(b);
strcpy(c,a);
strcpy(a,b);
strcpy(b,c);
printf("after swapping\n");
puts(a);
puts(b);
}
