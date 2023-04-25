#include<iostream>
using namespace std;
int nextprime(int p)
{
int i=p+1,j,f;
while(i>p)
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
};
}


int main()
{
int i,n,j,k=1,p=2;
double sum=0,sum1=0,fact=1,fact1=1;
    cout<<"enter range:-";
    cin>>n;
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=i;j++)
    {
    cout<<j<<"!";
    if(j<i)
    {
    cout<<"+";
    }
    for(k=1;k<=j;k++)
    {
   fact=fact*k;
}
sum1=sum1+fact;
   fact=1;
}
cout<<"/"<<p<<"!";
if(i<n)
{
cout<<" + ";
}
for(k=1;k<=p;k++)
{
fact1=fact1*k;
}
sum=sum+(double)sum1/fact1;
sum1=0;
fact1=1;
p=nextprime(p);
}
cout<<"=\nsum of seriese="<<sum<<endl;
return 0;
}


