#include<iostream>
using namespace std;
int *array_size(int *a,int *n)
{
int p,i;
cout<<"which posn element want to delete:-";
cin>>p;
for(i=p;i<*n;i++)
{
a[i-1]=a[i];
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
int *p=array_size(a,&n);
cout<<"after deletion-----\n";
for(i=0;i<n-1;i++)
{
cout<<*(p+i)<<" ";
}
}

    