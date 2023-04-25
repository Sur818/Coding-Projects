#include<stdio.h>
int main()
{
FILE*fptr;
char ch;
char fname[100];
printf("file name");
gets(fname);
fptr=fopen("fname","w");
printf("enter charecter");
scanf("%c",&ch);
while(ch!='z')
{
 fprintf(fptr,"%c",ch);
scanf("%c",&ch);
}
fclose(fptr);
return 0;
}


 


