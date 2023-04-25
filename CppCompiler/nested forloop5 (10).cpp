#include<iostream>
using namespace std;
int nextprime(int n)
{
int i=n+1,j,f;
while(i>n)
{
f=0;
for(j=2;j<=i/2;j++)
{
if(i%j==0)
{
f++;
}
}
if(f==0)
{
return i;
}
i++;
}
}

int main()
{
int i,j,n,k=2;
cout<<"enter no of row:-";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
cout<<k;
if(k<10)
{
cout<<"  ";
}
else
{
cout<<" ";
}
k=nextprime(k);
}
cout<<"\n";
}
return 0;
}