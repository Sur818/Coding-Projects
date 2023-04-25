#include<iostream>
using namespace std;
int arry(int arr[],int n,int i);


int main()
{
int n;
cout<<"size of array";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
}
arry(arr,n,0);
}


int arry(int arr[],int n,int i)
{
int temp;
if(i<n)
{
if(i<=n/2)
{
temp=arr[i];
arr[i]=arr[n-1-i];
arr[n-1-i]=temp;
}
cout<<arr[i]<<" ";
return arry(arr,n,i+1);
}
else
return 0;
}



    