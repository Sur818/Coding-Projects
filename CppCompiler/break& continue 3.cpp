#include<iostream>
using namespace std;

int main()
{
int i,j,k;
for(i=1;i<=10;i++)
{
for(j=1;j<=5;j++)
{
if(j==3)
{
continue;
}
cout<<j<<endl;
}
}
return 0;
}
  