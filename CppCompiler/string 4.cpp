#include<iostream>
#include <string.h>
using namespace std;

int main()
{
int i,j,n;
cout<<"enter many string want to be enter:-";
cin>>n;
char str[n][100];
char temp[100];
cout<<"enter string:-\n";
for(i=0;i<n;i++)
{
cout<<"str["<<i<<"]=";
cin>>str[i];
}

for(j=0;j<n;j++)
{
for(i=0;i<n-1;i++)
{
if(strcmp(str[i],str[i+1])>0)
{
strcpy(temp,str[i]);
strcpy (str[i],str[i+1]);
strcpy(str[i+1],temp);
}
}
}
cout<<"\n\nafter sorting in dictionary order:--->\n\n";
for(i=0;i<n;i++)
{
cout<<str[i]<<endl;
}
return 0;
}
