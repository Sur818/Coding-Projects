#include<iostream>
using namespace std;


int main()
{

 int i,n,k;
cout<<"enter size:-";
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
cout<<"This program find kth max and kth min element:-";
cin>>k;
sort(a,a+n);

 cout<<k<<"th max="<<a[n-k]<<endl;
cout<<k<<"th min="<<a[k-1];
}
    