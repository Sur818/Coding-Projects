#include<iostream>
using namespace std;

int *max_element(int *arr,int *n)
{
int i,*max=arr;
for(i=0;i<*n;i++)
{
if(arr[i]>*max)
{
*max=arr[i];
}
}
return max;
}


int main()
{
int n,i;
cout<<"enter size:-";
cin>>n;
int arr[n];
for(i=0;i<n;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
}
cout<<"max. element are:-";
int *p=max_element(arr,&n);
cout<<*p;
}
