#include<iostream>
using namespace std;

int main()
{
  int n,i,j,max,min,sum=0,avg;
cout<<"enter size:-";
cin>>n;
int arr[n];
for(i=0;i<n;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
}
max=min=arr[0];
for(i=0;i<n;i++)
{
if(arr[i]>max)
{
max=arr[i];
}
if(arr[i]<min)
{
min=arr[i];
}
}
for(i=0;i<n;i++)
{
if(arr[i]!=max&&arr[i]!=min)
{
cout<<arr[i]<<endl;
sum=sum+arr[i];
}
}

avg=sum/(n-2);
cout<<"avg of no except max and min value="<<avg;
}
