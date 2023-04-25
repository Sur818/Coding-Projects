#include<iostream>
using namespace std;

int main()
{
int i,n,sum=0;
cout<<"enter no:-";
cin>>n;
i=1;
while(i<=10)
{
cout<<n<<"*"<<i<<"="<<n*i<<endl;
sum=sum+n*i;
i++;
}
cout<<"sum of table="<<sum<<endl;
return 0;
}