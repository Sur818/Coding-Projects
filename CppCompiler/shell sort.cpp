#include<iostream>
using namespace std;
void shell_sort(int a[],int n)
{
int i,j,gap=n/2,k,temp;
for(i=gap;i>0;i=i/2)
{
for(j=gap;j<n;j++)
{
temp=a[j];
k=0;
for(k=j;k-i>=0&&a[k-i]>temp;k=k-i)
{
a[k]=a[k-i];
}
a[k]=temp;
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
shell_sort(a,n);
}