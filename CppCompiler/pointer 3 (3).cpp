#include<iostream>
using namespace std;


int *array_print( int *arr,int n)
{
int i;
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>arr[i];
}


return arr;
}
int main()
{
int n,i;
cout<<"enter size:-";
cin>>n;
int arr[n];
int *p=array_print(arr,n);
for(i=0;i<n;i++)
{
cout<<*(p+i)<<endl;
}
}
