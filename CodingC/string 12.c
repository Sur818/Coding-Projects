#include<stdio.h>

int main()
{
 int i,j,r,n;
  char temp[100];
printf("how many name want to enter:=");
scanf("%d",&n);
 char name[n][100];

for(i=0;i<n;i++)
{
printf("enter name=");
scanf("%s",&name[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n-1;j++)
{
 r=strcmp(name[j],name[j+1]);
if(r>0)
{
   strcpy(temp,name[j]);
  strcpy(name[j],name[j+1]);
  strcpy(name[j+1],temp);
  
  }
} 
}
for(i=0;i<n;i++)
{
puts(name[i]);
}
return 0;
}