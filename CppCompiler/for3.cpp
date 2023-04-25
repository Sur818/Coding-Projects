#include<iostream>
using namespace std;

int main()
{
 int i,sum=0,j;
for(i=1;i<=10;i++)
{
for(j=1;j<=10;j++)
{
if(j%2==0)
{
continue;
}
cout<<j<<endl;
sum=sum+j;
}
cout<<endl;
}
cout<<sum;
return 0;
}