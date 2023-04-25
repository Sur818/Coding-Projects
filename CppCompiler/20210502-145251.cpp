#include<iostream>
using namespace std;

int no(int n,int i=2)
{
if(i<=n)
{
if(n%i==0)
{
cout<<i<<" ";
}
return no(n,i+1);
}
else
return 0;
}



int main()
{
int n;
cout<<"enter no";
cin>>n; 
no(n);
}