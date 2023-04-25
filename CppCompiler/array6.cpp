#include<iostream>
using namespace std;

int main()
{
int n,i;
cout<<"enter size";
cin>>n;
 int arr[n];
for(i=0;i<n;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
}
sort(arr,arr+n,greater<int>());
for(i=0;i<n;i++)
{
cout<<arr[i]<<endl;
}
return 0;
}
