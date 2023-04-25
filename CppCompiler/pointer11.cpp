#include<iostream>
using namespace std;
int *odd_even(int *a,int n)
{
int i,*b,*c,k=0,l=0;
for(i=0;i<n;i++)
{
if(a[i]%2==0)
{
b[k++]=a[i];
}
else
{
c[l++]=a[i];
}
}
l=0;
for(i=k;i<n;i++)
{
b[i]=c[l++];
}
return b;
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
int *p=odd_even(a,n);
for(i=0;*(p+i)!='\0';i++)
{
cout<<*(p+i);
}
}
    