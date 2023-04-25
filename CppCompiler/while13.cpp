#include<iostream>
using namespace std;

int main()
{
int n1,n2;
cout<<"enter two no:-";
cin>>n1>>n2;
  while(n1!=n2)
{
if(n1>n2)
n1-=n2;
else
n2-=n1;
};
cout<<"Gcd="<<n1;
return 0;
}
