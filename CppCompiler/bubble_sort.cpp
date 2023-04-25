#include<iostream>
using namespace std;
void bubble_sort(int a[],int n)
{
int i,j,temp;
for (i=0;i<n;i++)
{
for(j=0;j<n-1-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j+1];
a[j+1]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
}





int main()
{
 int i,n;
cout<<"enter size of array:-";
cin>>n;
int a[n];
cout<<"enter element in array:-\n";
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
bubble_sort(a,n);
}