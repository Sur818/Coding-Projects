#include<iostream>
using namespace std;

int main()
{
  int i,j,n,p;
cout<<"enter size of array:-";
cin>>n;
int arr[n];
for(i=0;i<n;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
}
cout<<"find kth smallest and kth largest element:-";
cout<<"enter position";
cin>>p;
sort(arr,arr+n);
cout<<p<<"th largest element "<<arr[n-p]<<endl;
cout<<p<<"th smallest element"<<arr[p-1];
return 0;
}