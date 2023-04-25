#include<iostream>
using namespace std;
int array_acuren(int *a,int n,int m)
{
int i,Freq=0;
for(i=0;i<n;i++)
{
if(*(a+i)==m)
{
Freq++;
}
}
return Freq;
}

int main()
{
 int i,n,m;
cout<<"enter size of array:-";
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
cout<<"enter element which frequency want to get:-";
cin>>m;
cout<<array_acuren(a,n,m);
return 0;
}

