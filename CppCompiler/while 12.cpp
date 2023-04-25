#include<iostream>
using namespace std;

int main()
{
 int i,z,n1,rev=0,n;
cout<<"enter no:-";
cin>>n;
z=n;
while(n!=0)
{
n1=n%10;
rev=rev*10+n1;
n=n/10;
};
if(rev==z)
{
cout<<"palindrome no:-";
}
else
{
cout<<"not palindrome no:-";
}
return 0;
}