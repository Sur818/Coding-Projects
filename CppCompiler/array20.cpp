#include<iostream>
using namespace std;
void first_repeat( int [],int n);
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
cout<<"first repeating element =\n";
first_repeat(arr,n);
return 0;
}

void first_repeat(int arr[] ,int n)
{
int i,j;
bool flag=false;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]==arr[j])
{
flag=true;
cout<<arr[i];
break;
}
}
}
if(flag==false)
{
cout<<"no element are exist\n";
}
}


