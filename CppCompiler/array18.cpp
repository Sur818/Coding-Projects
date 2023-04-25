#include<iostream>
using namespace std;
void show(int [] ,int );


int main()
{
int i,n,j,z,m,k=0,p;
cout<<"enter size";
cin>>n;
   int arr[n+1];
for(i=0;i<n;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
}
cout<<"how many element want to insert";
cin>>p;

while (k++<p)
{
cout<<"which element want to insert:-";
cin>>m;
cout<<"where beside element:-";
cin>>z;
for(i=0;i<n;i++)
{
if(arr[i]==z)
{
for(j=n-1;j>i;j--)
{
arr[j+1]=arr[j];
}
arr[i+1]=m;
n++;
i++;
show(arr,n);
}
}
}
return 0;
}

void show(int arr[],int n)
{
int i;
for(i=0;i<n;i++)
{
cout<<arr[i]<<endl;
}
}
    