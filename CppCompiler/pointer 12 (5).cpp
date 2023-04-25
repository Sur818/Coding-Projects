#include<iostream>
using namespace std;
int *odd_evensaptrate(int *a,int n)
{
int i,*b,j=0,k=0;
b=(int *)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
if(a[i]%2==0)
b[j++]=a[i];
else
{
b[n-1-k]=a[i];
k++;
}
}
return b;
}

int main()
{
   int i,n;
cout<<"enter size :-";
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
int *p=odd_evensaptrate(a,n);
for(i=0;i<n;i++)
{
cout<<*(p+i)<<" ";
}
}
 