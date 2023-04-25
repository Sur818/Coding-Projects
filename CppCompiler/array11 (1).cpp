#include<iostream>
using namespace std;
int *delete_array(int *a,int n)
{
int i,p,j;
cout<<"which  element want to delete:-";
cin>>p;
for(i=0;i<n;i++)
{
if(a[i]==p)
{
for(j=i;j<n-1;j++)
{
a[j]=a[j+1];
}
}
}
return a;
}


int main()
{
 int i,n;
cout<<"enter size:-";
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
int *p= delete_array (a,n);
for(i=0;i<n-1;i++)
{
cout<<*(p+i)<<" ";
}
}
    