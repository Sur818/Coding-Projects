#include<iostream>
#include<math.h>
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
};
}


int main()
{
double i,k=2,n,sum=0;
cout<<"enter no of term:-";
cin>>n;
for(i=1;i<=n;i++)
{
cout<<1<<"/"<<i<<"^"<<k;
if(i<n)
{
cout<<" + ";
}
sum=sum+1/(pow(i,k));
k=nextprime(k);
}
cout<<"="<<sum;
return 0;
}

