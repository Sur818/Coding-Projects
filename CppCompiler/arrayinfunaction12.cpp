#include<iostream>
using namespace std;
void arr(int [],int,int);

int main()
{
int i,j,n,k;
cout<<"enter  size:-";
cin>>n;
 int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}

cout<<"enter difference:-";
cin>>k;
sort(a,a+n);
arr(a,n,k);
return 0;
}


void arr(int a[],int n,int k)
{
int i,j;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[j]-a[i]==k)
{
cout<<"["<<a[j]<<" "<<a[i]<<"]";
cout<<endl;
}
}
}
}
