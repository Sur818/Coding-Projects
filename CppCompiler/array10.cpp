#include<iostream>
using namespace std;

int main()
{
  int n,i;
cout<<"enter size of Array:-";
cin>>n;
int arr[n];
for(i=0;i<n;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
}
cout<<"even elements are:-\n";
for(i=0;i<n;i++)
{
if(arr[i]%2==0)
cout<<arr[i]<<" ";
}
cout<<"\nodd element are:-\n";
for(i=0;i<n;i++)
{
if(arr[i]%2!=0)
cout<<arr[i]<<" ";
}
return 0;
}

