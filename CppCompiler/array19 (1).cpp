#include<iostream>
using namespace std;
void sort(int [] ,int );
void show(int [] ,int);


int main()
{
int i,n,z,m,k=0,p;
cout<<"enter size";
cin>>n;
   int arr[n+1];
for(i=0;i<n;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
}
cout<<"how many element want to insert:-";
cin>>p;
while (k++<p)
{
cout<<"which element want to insert:-";
cin>>m;
cout<<"which position-";
cin>>z;
for(i=n-1;i>=z-1;i--)
{ 
arr[i+1]=arr[i];
}
arr[z-1]=m;
n++;
cout<<" insertion before sorting\n";
show(arr,n);
cout<<"sorting after insertion\n";
sort(arr,n);
}
return 0;
}




void sort(int arr[],int n)
{
int i,j,temp;
for(i=0;i<n;i++)
{
for(j=0;j<n-1;j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
for(i=0;i<n;i++)
{
cout<<arr[i]<<endl; 
}
}  

void show(int arr[] ,int n)
{
int i;
for(i=0;i<n;i++)
{
cout<<arr[i]<<endl;
}
}