#include<iostream>
using namespace std;

int rev(int n)
{
int i,n1,rev=0;
for(i=1;n!=0;i++)
{
n1=n%10;
rev=rev*10+n1;
n=n/10;
}
return rev;
}


int main()
{
int n,i,b;
cout<<"enter no";
cin>>n;
b=rev(n);
cout<<"reverse of no="<<b;
}


  