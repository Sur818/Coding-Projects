#include<iostream>
using namespace std;

int main()
{
cout<<"\n odd table:-\n";
int i,n,sum=0;
cout<<"enter no for which table want";
cin>>n;
for(i=1;i<=10;i++)
{
if(i%2==1)
{
continue;
}
cout<<n<<"*"<<i<<"="<<n*i<<endl;
sum=sum+n*i;
}
cout<<"sum of tabel="<<sum;
return 0;
}
