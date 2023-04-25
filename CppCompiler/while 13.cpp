#include<iostream>
using namespace std;

int main()
{
 int i,z,n1,rev,n=0,m;
cout<<"enter no:-";
cin>>m;
while (n++<m)
{
z=n;
int temp=n;
rev=0;
while(temp!=0)
{
n1=temp%10;
rev=rev*10+n1;
temp=temp/10;
};
if(rev==z)
{
cout<<z<<endl;
}
};
return 0;
}