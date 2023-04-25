#include<stdio.h>

int main()
{
  char str[100];
  int i,n,j,k;
printf("enter string:=");
 gets(str);
n=strlen(str);
for(i=0;i<n;i++)
{
if(str[i]==' '||str[i]=='@'||str[i]=='.')
{
for(j=i;j<n;j++)
{
  str[j]=str[j+1];

}
n--;
i--;
}
else if(str[i]==str[i+1])
{
 for(k=i;k<n;k++)
{
  str[k]=str[k+1];
}
n--;
i--;
}
}
puts(str);
return 0;
}
 
    