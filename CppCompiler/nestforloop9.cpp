#include<iostream>
using namespace std;
int prime(int);

int prime(int n)
{
int i=2,f=0;
while (i<=n/2)
{
if(n%i==0)
{
 f=1;
}
i++;
}
if(f==0)
{
return 1;
}
else
{
return 0;
}
}


int main()
{
   double i,j,n,k,sum1=0,sum=0;
cout<<"enter range";
cin>>n;
for(i=1;i<=n;i++)
{
cout<<"1/";
j=1;
k=1;
while(j<=i)
{
if(prime(k)==0||k==1)
{
j++; 
cout<<k;
if(j<=i)
{
cout<<"+";
}
sum1=sum1+k;
}
k++;
}
sum=sum+(double)1/sum1;
sum1==0;
if(i<n)
{
cout<<" + ";
}
}
cout<<"="<<"sum of seriese="<<sum;
}




