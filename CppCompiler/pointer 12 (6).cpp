#include<iostream>
using namespace std;
int max_element(int b[],int n)
{
int maxm=0;
maxm=*max_element(b,b+n);
return maxm;
}

void subarray(int a[],int n,int k)
{
int i=0,b[k],j,l=0;
while (i<n)
{
for(j=0;j<k;j++)
{
b[j]=a[i+j];
}
i+=k;
if(i<=n)
{
cout<<max_element(b,j)<<" ";
}
}
if(i<n)
{
for(j=i-k;j<n;j++)
{
b[l++]=a[j];
}
cout<<max_element(b,l);
}
}


int main()
{
int i,n,k;
cout<<"find max element in given segment of array:--\n\n";
cout<<"enter size:-"; 
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
cout<<"enter segment:-";
cin>>k;
subarray(a,n,k);
}