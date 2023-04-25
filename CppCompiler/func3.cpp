#include<iostream>
using namespace std;
int prime ()
{
int n;
cout<<"enter any no";
cin>>n;
return n;
}
int main()
{
int num,flag=0;
num=prime();
for(int i=2;i<=num/2;i++)
{
if(num%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
cout<<" prime no";
}
else
{
cout<<"not prime no";
}
return 0;
}
