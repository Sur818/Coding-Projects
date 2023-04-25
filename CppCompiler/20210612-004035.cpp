#include<iostream>
using namespace std;
int *odd_even(int *a,int n)
{
int i,j=0,k=n-1,temp;
for(i=0;i<n;i++)
{
while(a[j]%2==0)
{
j++;
}
while(a[k]%2!=0)
{
k--;
}
if(j<k)
{
temp=a[j];
a[j]=a[k];
a[k]=temp;
}
}
for(i=0;i<n;i++)
{
cout<<*(a+i);
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
int *p=odd_even(a,n);
for(i=0;*(p+i)!='\0';i++)
{
cout<<*(p+i);
}
}
    