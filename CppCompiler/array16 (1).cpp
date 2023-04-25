#include<iostream>
using namespace std;

int main()
{
  int i,n1,n2,j,k=0;
cout<<"enter size:-";
cin>>n1;
int arr1[n1];
cout<<"enter element in first array:-\n";
for(i=0;i<n1;i++)
{
cout<<"arr1["<<i<<"]=";
cin>>arr1[i];
}

cout<<"\enter size of second array:-";
cin>>n2;
int arr2[n2];
for(i=0;i<n2;i++)
{
cout<<"arr2["<<i<<"]=";
cin>>arr2[i];
}
int arr3[n1+n2];
cout<<"union of  two Array:-\n";
for(i=0;i<n2;i++)
{
arr3[k++]=arr2[i];
}
for(i=0;i<n1;i++)
{
int found=0;
for(j=0;j<n2;j++)
{
if(arr1[i]==arr2[j])
found=1;
}
if(found==0)
{
arr3[k++]=arr1[i];
}
}
for(i=0;i<k;i++)
{
cout<<arr3[i]<<endl;
}
return 0;
}


    