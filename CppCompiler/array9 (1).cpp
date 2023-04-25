#include<iostream>
using namespace std;

int main()
{
int n,i,k;
cout<<"enter size:-";
cin>>n;
int arr1[n];
int arr2[2*n];
cout<<"enter element in first array:-\n";
for(i=0;i<n;i++)
{
cout<<"arr1["<<i<<"]=";
cin>>arr1[i];
}
cout<<"enter element in second array:-\n";
for(i=0;i<n;i++)
{
cout<<"arr2["<<i<<"]=";
cin>>arr2[i];
}
k=n;
for(i=0;i<n;i++)
{
arr2[k++]=arr1[i];
}
sort(arr2,arr2+2*n);
cout<<"after merging and sorting:-\n";
for(i=0;i<2*n;i++)
{
cout<<arr2[i]<<endl;
}
return 0;
}


