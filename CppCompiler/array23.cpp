#include<iostream>
using namespace std;
int min(int [],int);
int max(int [],int);

int main()
{
int i,n;
cout<<"enter  size:-";
cin>>n;
 int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
cout<<"min deference b/w to element "<<min(a,n)<<endl;
cout<<"max difference b/w to element"<<max(a,n);
return 0;
}


int min(int b[],int n)
{
int i,j,sum,minm=b[0];
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
sum=abs(b[i]-b[j]);
minm=min(minm,sum);
}
}
return minm;
}


int max(int c[],int n)
{
int i,j,maxm=0,sum;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i!=j)
{
sum=c[j]-c[i];
maxm=max(maxm,sum);
}
}
}
return maxm;
}



