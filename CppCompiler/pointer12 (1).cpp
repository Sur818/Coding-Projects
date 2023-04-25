#include<iostream>
using namespace std;


int main()
{
 int i,n;
cout<<"enter size:-";
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
sort(a,a+n);
 cout<<"second max="<<a[n-2]<<endl;
cout<<"second_min="<<a[1];
}
    