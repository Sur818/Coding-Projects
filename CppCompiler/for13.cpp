#include<iostream>
using namespace std;

int main()
{
 int i,n,rev=0,n1;
cout<<"enter no";
cin>>n;
int z=n;
for(i=0;n!=0;i++)
{
n1=n%10;
rev=rev+n1*n1*n1;
n=n/10;
}
if(rev==z)
{
cout<<"Armstrong no";
}
else
{
cout<<"not Armstrong no";
}
return 0;
}
