#include<iostream>
using namespace std;

int main()
{
int i=2,n;
cout<<"enter no";
cin>>n;
cout<<"all prime factors are:-\n";
for(i=2;n!=0;i++)
{
while(n%i==0)
{
cout<<i<<endl;
n=n/i;
}
}
return 0;
}