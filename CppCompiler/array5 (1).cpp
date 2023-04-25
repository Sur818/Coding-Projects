#include<iostream>

using namespace std;

int main()
{
cout<<"find third largest element in Array";
int n,i,sum=0,max,min;
cout<<"enter size:-";
cin>>n;
 int arr[n];
for(i=0;i<n;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
}
sort(arr,arr+n);
cout<<" third max element in array="<<arr[n-1-2]<<endl;
cout<<"third min element in Array="<<arr[2]<<endl;
return 0;
}
