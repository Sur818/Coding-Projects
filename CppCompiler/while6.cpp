#include<iostream>
using namespace std;

int main()
{
 int count=0,n,n1;
cout<<"enter no:-";
cin>>n;
while(n!=0)
{
n1=n%10;
n=n/10;
if(n1!=0)
{
count++;
}
};
cout<<"no of non_zero digits=:-"<<count<<endl;
return 0;
}