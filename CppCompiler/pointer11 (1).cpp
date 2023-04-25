#include<iostream>
using namespace std;
int *insert_array(int *,int );
int main()
{
cout<<"This program is insert element in sorted list:----\n\n";
int i,n;
cout<<"enter size:-";
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
sort(a,a+n);
int *p=insert_array(a,n);
for(i=0;i<n+1;i++)
{
cout<<*(p+i);
}
}

int *insert_array(int *a,int n)
{
int i,m,posn;
cout<<"enter no want to insert:---\n";
cin>>m;
for(i=0;i<n;i++)
{
if(m<=a[i])
{
posn=i;
break;
}
}
for(i=n;i>posn;i--)
{
a[i]=a[i-1];
}
a[posn]=m;
return a;
}