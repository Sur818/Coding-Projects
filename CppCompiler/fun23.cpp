#include<iostream>
using namespace std;
int binary(int a)
{
int i,bin=0;
for(i=1;a!=0;i=i*10)
{
bin=bin+(a%2)*i;
a=a/2;
}
return bin;
}


int main()
{
int n,temp;
cout<<"enter any no";
cin>>n;
temp=binary(n);
cout<<"binary of no="<<temp;
return 0;
}