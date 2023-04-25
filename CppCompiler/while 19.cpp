#include<iostream>
using namespace std;

int main()
{
int i=1,n,fact=1;
cout<<"enter no:-";
cin>>n;
while(i<=n)
{
fact=fact*i;
i++;
}
cout<<n<<"!="<<fact;
return 0;
}