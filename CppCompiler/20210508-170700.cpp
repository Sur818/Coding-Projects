#include<iostream>
using namespace std;

int main()
{
  int i,n1,n2,j;
cout<<"enter size:-";
cin>>n1;
int arr1[n1];
cout<<"enter element in first array:-\n";
for(i=0;i<n1;i++)
{
cout<<"arr1["<<i<<"]=";
cin>>arr1[i];
}

cout<<"\enter size of second array:-\n";
cin>>n2;
int arr2[n2];
for(i=0;i<n2;i++)
{
cout<<"arr2["<<i<<"]=";
cin>>arr2[i];
}
cout<<"common elements between two Array:-\n";
for(i=0;i<n1;i++)
{
for(j=0;j<n2;j++)
{
if(arr1[i]==arr2[j])
{
cout<<arr1[i]<<endl;
}
}
}
return 0;
}


