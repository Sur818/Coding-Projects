#include<iostream>
using namespace std;
bool ispalindrome (int*b,int k)
{
int i,c[k],flag=0;
for(i=0;i<k;i++)
{
c[i]=b[k-1-i];
}
for(i=0;i<k;i++)
{
if(c[i]!=b[i])
{
flag++;
return false;
break;
}
}
if(flag==0)
{
return true;
}
}

void array_longest(int *a,int n)
{
cout<<"longest pelindrome subarray:--\n";
int i,j,*b,ans=0,k=0,index;
for(i=0;i<n;i++)
{
for(j=i;j<n;j++)
{
b[k++]=a[j];
if(ispalindrome(b,k))
{
if(ans<k)
{
index=i;
}
ans=max(ans,k);
}
}
k=0;
}
for(i=index;k++<ans;i++)
{
cout<<a[i];
}
cout<<"\n";
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
array_longest(a,n);
}