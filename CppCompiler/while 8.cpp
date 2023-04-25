#include<iostream>
using namespace std;

int main()
{
 int rev=0,n,n1;
cout<<"enter no:-";
cin>>n;
while(n!=0)
{
n1=n%10;
rev=rev*10+n1;
n=n/10;
};
cout<<"reverse of no=:-"<<rev<<endl;
return 0;
}