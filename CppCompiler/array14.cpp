#include<iostream>
using namespace std;

int main()
{
 int n1,n2,i,j,k=0;
cout<<"enter size of first array";
cin>>n1;
int arr1[n1];
int arr3[n1];
for(i=0;i<n1;i++)
{
cout<<"arr1["<<i<<"]=";
cin>>arr1[i];
}
cout<<"enter size of second array:-";
cin>>n2;
int arr2[n2];
for(i=0;i<n2;i++)
{
cout<<"arr2["<<i<<"]=";
cin>>arr2[i];
}
for(i=0;i<n1;i++)
{
for(j=0;j<n2;j++)
{
if(arr1[i]==arr2[j])
{
arr3[k++]=arr1[i];
}
}
}
cout<<"common elements between two array:-\n";
for(i=0;i<k;i++)
{
cout<<arr3[i]<<endl;
}
return 0;
}
