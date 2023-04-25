#include<iostream>
using namespace std;
int *insert_array(int *a,int n,int m,int p)
{
int i;
for(i=n-1;i>=p-1;i--)
{
a[i+1]=a[i];
}
a[p-1]=m;
return a;
}



int main()
{
int i,n,p,m;
cout<<"enter size:-";
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
cout<<"enter no want to insert:-";
cin>>p;
cout<<"which posn:-";
cin>>m;
int *ptr=insert_array(a,n,p,m);
for(i=0;i<n+1;i++)
{
cout<<*(ptr+i)<<" ";
}
}


    