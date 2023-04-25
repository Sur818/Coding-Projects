#include<iostream>
using namespace std;
bool check_AP(int *b,int k)
{
int i,flag=0;
sort(b,b+k-1);
int d=b[1]-b[0];
for(i=1;i<k;i++)
{
flag++;
if(b[i]-b[i-1]!=d)
return false;
}
if(flag==0)
return true;
}

int array_longest(int *a,int n)
{
cout<<"longest arithmetic subarray:-\n\n";
int i,j,*b,k=0,ans=0,index1,index2;
b=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
k=0;
for(j=i;j<n;j++)
{
b[k++]=a[j];
if(check_AP(b,k))
{
if(ans<k)
{
index1=i;
index2=j;
}
ans=max(ans,k);
}
}
}
for(i=index1;i<=index2;i++)
{
cout<<a[i]<<" ";
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