#include<iostream>
using namespace std;

void table(int n)
{
int i,sum=0;
for(i=1;i<=10;i++)
{
cout<<n<<"*"<<i<<"="<<n*i<<endl;
sum=sum+n*i;
}
cout<<"sum of table="<<sum;
}
int main()
{
int n;
cout<<"enter no which find tabel";
cin>>n;
table (n);
return 0;
}

    