#include<iostream>
using namespace std;
void selection_sort(int a[],int n)
{
int i,j,k,temp;
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[j]<a[i])
{
k=j;
temp=a[k];
a[k]=a[i];
a[i]=temp;
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
selection_sort(a,n);
}