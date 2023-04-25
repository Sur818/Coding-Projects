#include<iostream>
using namespace std;
void res(int [],int);
int main()
{
  int i,j,n;
cout<<"enter size:-";
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
} 
res(a,n);
return 0;
}


void res(int a[],int n)
{
int i,b[n];
b[0]=a[1];
for(i=1;i<n-1;i++)
{
b[i]=a[i-1]*a[i+1];
}
b[n-1]=a[n-2]*a[n-1];
cout<<"\n\nafter upgradation:------>\n\n";
for(i=0;i<n;i++)
{
cout<<b[i]<<endl;
}

}


