#include<iostream>
using namespace std;

int main()
{
  int i,n,prod=1,j;
cout<<"enter size:-";
cin>>n;
int arr[n];
int arr1[n];
for(i=0;i<n;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i!=j)
{
prod=prod*arr[j];
}
}
arr1[i]=prod;
prod=1;
}
for(i=0;i<n;i++)
{
cout<<arr1[i]<<endl;
}
return 0;
}


