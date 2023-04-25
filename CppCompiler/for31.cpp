#include<iostream>
#include<cmath>
using namespace std;

int main()
{
int a;
 cout<<"for nth term enter 1:-";
cout<<"\nfor sum of n term enter 2:-";
cout<<"\nfor last term of of the series enter 3:-";
cout<<"\nfor first term enter 4:-\n";
cin>>a;
switch(a)
{
case 1:
{
int d,n,tn;
cout<<"enter first term:-";
cin>>a;
cout<<"enter common difference";
cin>>d;
cout<<"enter posn of term";
cin>>n;
tn=a+(n-1)*d;
cout<<n<<"th term are="<<tn<<endl;
for(int i=a;i<=tn;i=i+d)
{
cout<<i<<" ";
}
break;
}
case 2:
{
double n,d,sn,sum=0;
cout<<"enter first term:-"; 
cin>>a;
cout<<"enter common difference";
cin>>d;
cout<<"no of term:-";
cin>>n;
sn=((n)*(2*a+(n-1)*d))/2;
cout<<"sum of"<<n<<"term of Ap="<<sn<<endl;
for(int i=a;sum<=sn;i=i+d)
{
cout<<i;
sum=sum+i;
if(sum<=sn)
{
cout<<"+";
}
}
break;
}
case 3:
{
int n,d,l;
cout<<"enter first term ";
cin>>a;
cout<<"enter common difference:-";
cin>>d;
cout<<"enter no of term:-";
cin>>n;
l=a+(n-1)*d;
cout<<"last term of series="<<l<<endl;
for(int i=a;i<=l;i+=d)
{
cout<<i<<" ";
}
break;
}
case 4:
{
cout<<"if sum of n term given then enter 1";
cout<<"if last term given then 2\n";
cin>>a;
switch(a)
{
case 1:
{
int n,sn,d,k=0;
cout<<"enter no of term:-";
cin>>n;
cout<<"enter sum of n term:-";
cin>>sn;
cout<<"enter common difference:-";
cin>>d;
for(int i=n;++k<=n;i-=d)
{
cout<<i<<" ";
if(k==n)
{
cout<<"\nfirst term="<<i<<" ";
}
}
break;
}
case 2:
{
int l,d,n,a,k=0;
cout<<"enter last term=";
cin>>l;
cout<<"enter no of term=";
cin>>n;
cout<<"enter common difference:-";
cin>>d;
a=l-(n-1)*d;
for(int i=l;++k<=n;i=i-d)
{
cout<<i<<" ";
}
cout<<"\nfirst term ="<<a;
break;
}
}
break;
}
default:
{
cout<<"enter valid operation";
break;
}
}
return 0;
}




