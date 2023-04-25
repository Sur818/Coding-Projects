#include<stdio.h>

int main()
{
 char name[100];
  int i,j,n,count1=0,count2=0,count3=0,count4=0;
 printf("enter name");
gets(name);
 n=strlen(name);
for(i=1;i<=n;i++)
{
 if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
  {
    count1++;
    }
    else if(name[i]==' ')
    {
    count2++;
    }
    else if(name[i]=='.'||name[i]=='@')
{
count3++;
}
else
{
count4++;
}
}
printf("vowel=%d\n",count1);
printf("consonent=%d\n",count4);
printf("special char=%d\n",count3);
printf("space=%d",count2);
return 0;
}
  
  