#include<iostream>
using namespace std;
void subarray(int [],int ,int);
void productivesub(int arr[],int n)
{
int p=arr[0],prod,i,j;
for(i=0;i<n;i++)
{
prod=arr[i];
for(j=i+1;j<n;j++)
{
p=max(p,prod);
prod=prod*arr[j];
}
p=max(p,prod);
}
cout<<"longest subarray whoo's product max="<<p;
cout<<endl;
subarray(arr,n,p);
}


void subarray(int arr[],int n,int p)
{
int i,j,k,prod;
for(i=0;i<n;i++)
{
prod=1;
for(j=i;j<n;j++)
{
prod*=arr[j];
if(prod==p)
{
cout<<"{";
for(k=i;k<=j;k++)
{
cout<<arr[k]<<" ";
}
cout<<"}";
cout<<endl;
}
}
}
}

int main()
{
 /*int arr[]={1,2,4,-4,0,8};
/int arr[]={1,-2,-3,0,7,-8,-2};
int n,i;
n=sizeof(arr)/sizeof(arr[0]);
productivesub(arr,n);*/
int i,n;
cout<<"enter size of array:";
cin>>n;
int arr[n];
cout<<"fill array with some positive and nagative no:-\n";
for(i=0;i<n;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
}
productivesub(arr,n);
return 0;
}