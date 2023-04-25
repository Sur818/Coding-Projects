#include<iostream>
using namespace std;
int first_repeat( int [],int n);
int main()
{
int i,j,n;
cout<<"enter size";
cin>>n;
int arr[n];
for(i=0;i<n;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
}
cout<<"first  non repeating element =\n";
cout<<first_repeat(arr,n);
return 0;
}

int first_repeat(int arr[] ,int n)
{
int i,j;
bool flag=true;
for(i=0;i<n;i++)
{
flag=true;
for(j=i+1;j<n;j++)
{
if(arr[i]==arr[j])
{
flag=false;
}
}
if(flag)
{
return arr[i];
}
}
}


