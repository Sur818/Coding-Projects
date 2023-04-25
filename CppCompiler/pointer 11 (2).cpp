#include<iostream>
using namespace std;
int *insert_array(int *a,int n,int t)
{
int i,j=0,p,m;
while (j++<t)
{
cout<<"enter no want to insert-";
cin>>m;
cout<<"which posn:-";
cin>>p;
for(i=n-1;i>=p-1;i--)
{
a[i+1]=a[i];
}
a[p-1]=m;
}
return a;
}



int main()
{
int i,n,t;
cout<<"enter size:-";
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
cout<<"how many no want to insert:-";
cin>>t;
n=n+t;
int *ptr=insert_array(a,n,t);
for(i=0;i<n;i++)
{
cout<<*(ptr+i)<<" ";
}
}


    