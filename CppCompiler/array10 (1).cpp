#include<iostream>
using namespace std;
int max_deviser(int p[],int n)
{
int i,Freq,ans=0,j,maxm;
for(i=0;i<n;i++)
{
Freq=0;
for(j=0;j<n;j++)
{
if(p[j]%p[i]==0)
{
Freq++;
if(ans<Freq)
{
maxm=p[i];
}
ans=max(ans,Freq);
}
}
}
return maxm;
}

int main()
{
cout<<"this program find element who devide max element of array:-\n\n";
 int a[10],i,n;
cout<<"enter size:-";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
cout<<"max deviser"<<max_deviser(a,n);
}