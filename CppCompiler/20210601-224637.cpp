#include<iostream>
using namespace std;
int array_find(int *arr,int *n,int p)
{
int i,Freq=0;
for(i=0;i<*n;i++)
{
if(*(arr+i)==p)
{
Freq++;
}
}
return Freq;
}

int main()
{
 int n,i,p;
cout<<"enter no:-";
cin>>n;
int arr[n];
for(i=0;i<n;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
}
cout<<"enter no which frequency you want:-";
cin>>p;
int f=array_find(arr,&n,p);
cout<<f;
}