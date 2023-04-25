#include<iostream>
#include<cstdlib>
using namespace std;


int compare(int a,int b)
{
return a>b;
}


int arry(int a[],int n)
{

//sort(a,a+n);
sort(a,a+n ,compare);
for(int i=0;i<n;i++)
{
cout<<a[i]<<endl;
}
}


int main()
{
int n,i;
cout<<"enter size of array";
cin>>n;
int arr[n];
for(i=0;i<n;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i]; 
}
arry(arr,n);
return 0;
}


