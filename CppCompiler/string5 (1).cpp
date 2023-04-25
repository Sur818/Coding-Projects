#include<iostream>
using namespace std;
void duplicate (char []);
int main()
{
  char str[10];
cout<<"enter name";
gets(str);
cout<<"\n\n after removing duplicy:-->\n\n";
duplicate (str);
return 0;
}

void duplicate (char str[])
{
int i,j,k;
int n=strlen(str);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(str[i]==str[j])
{
for(k=j;k<n;k++)
{
str[k]=str[k+1];
}
n--;
i--;
}
}
}
for(i=0;i<n;i++)
{
cout<<str[i];
}
}

