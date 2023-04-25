#include<iostream>
using namespace std;

int main()
{
  int n,i,k;
cout<<"enter size of Array:-";
cin>>n;
int arr[n];
for(i=0;i<n;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
}
cout<<"which posn element want to delete:-";
cin>>k;
for(i=k-1;i<n;i++)
{
arr[i]=arr[i+1];
}
for(i=0;i<n-1;i++)
{
cout<<arr[i]<<endl;
}


return 0;
}

