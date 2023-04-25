#include<iostream>
using namespace std;
void insertion_sort(int a[],int n)
{
int i,j,key;

for (i=1;i<n;i++)
{
key=a[i];
j=i-1;
while(j>=0 && a[j]>key)
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=key;
}
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
}





int main()
{
int n,i;
 cout<<"enter size of array:-";
 cin>>n;
int a[n];
cout<<"enter element in array:-\n";
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
insertion_sort(a,n);
}