#include<iostream>
using namespace std;

int main()
{
int n,i;
cout<<"enter size";
cin>>n;
 int arr[n];
int arr1[n];

for(i=0;i<n;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
arr1[i]=arr[i];
}
cout<<"after copying to second array:-\n";
for(i=0;i<n;i++)
{
cout<<"arr1["<<i<<"]=";
cout<<arr1[i]<<endl;
}
return 0;
}
