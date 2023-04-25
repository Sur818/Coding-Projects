#include<iostream>
using namespace std;

int main()
{
 int i,n,j;
cout<<"enter row:-";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=2*n-1;j++)
{
if(i==1||j==i||j==(2*n-i))
{
cout<<"*";
}
else
{
cout<<" ";
}
}
cout<<"\n";
}
return 0;
}
