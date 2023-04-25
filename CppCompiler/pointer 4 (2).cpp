#include<iostream>
using namespace std;
int *array_secmax(int *arr,int n)
{
sort(arr,arr+n);
return &arr[n-2];
}


int main()
{
int n,i;
cout<<"enter size:-";
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
cout<<"second max element are:---\n";
int *p=array_secmax(a,n);
cout<<*p;
}





