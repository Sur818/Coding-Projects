#include<iostream>
using namespace std;
void sort3(int arr1[] ,int arr2[],int arr3[],int n)
{
int i=0,j=0,k=0;
while (i<n&&j<n&&k<n)
{
if(arr1[i]==arr2[j]&&arr2[j]==arr3[k])
{
cout<<arr1[i]<<endl;
i++;
j++;
k++;
}
else if(arr1[i]<arr2[j])
{
i++;
}
else if(arr2[j]<arr3[k])
{
j++;
}
else
{
k++;
}
}
}

int main()
{
 int i,n,j,k=0;
cout<<"enter size:-";
cin>>n;
cout<<"enter element in first array:-\n";
int arr1[n];
for(i=0;i<n;i++)
{
cout<<"arr1["<<i<<"]=";
cin>>arr1[i];
}
cout<<"enter element in second array:-\n";
int arr2[n];
for(i=0;i<n;i++)
{
cout<<"arr2["<<i<<"]=";
cin>>arr2[i];
}
cout<<"enter element in third array:-\n";
int arr3[n];
for(i=0;i<n;i++)
{
cout<<"arr3["<<i<<"]=";
cin>>arr3[i];
}
sort3(arr1,arr2,arr3,n);
return 0;
}


