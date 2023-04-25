#include<iostream>
using namespace std;
int show(int arr[] ,int n)
{
int i;
for(i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}
cout<<endl;
}


 void rotation (int arr[],int n,int direc,int s)
{
int i,temp;
if(direc==1)
{
while (s--!=0)
{
temp=arr[n-1];
for(i=n-1;i>=1;i--)
{
arr[i]=arr[i-1];
}
arr[0]=temp;
}
show(arr,n);
}
else
{
while(s--!=0) 
{
temp=arr[0];
for(i=0;i<=n-2;i++)
{
arr[i]=arr[i+1];
}
arr[n-1]=temp;
}
show(arr,n);
}
}


int main()
{
cout<<"for right rotation direction=1\n";
cout<<"for Left rotation direction=0\n";
 int n,i,p;
int direc;
cout<<"enter size:-";
cin>>n;
int arr[n];
for(i=0;i<n;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
}
cout<<"no of rotation:-";
cin>>p;
cout<<"enter Direction:-";
cin>>direc;
show(arr,n);
rotation(arr,n,direc,p);
return 0;
}