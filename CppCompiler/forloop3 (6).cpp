#include<iostream>
using namespace std;
int nextprime(int n)
{
int i=n+1,f,j;
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



int nextcompst(int n)
{
int i=n+1,j,f;
while(i>n)
{
f=0;
for(j=1;j<=i;j++)
{
if(i%j==0)
{
f++;
}
}
if(f>2)
{
return i;
}
i++;
};
}


int main()
{
cout<<"series is like= prime/composite\n";
double sum=0,n,k1=2,k2=4;
int i;
    cout<<"enter no of term:-";
    cin>>n;
    for(i=1;i<=n;i++)
    {
    cout<<k1<<"/"<<k2;
    if(i<n)
    {
    cout<<"+";
    }
    sum=sum+(double)k1/k2;
    k1=nextprime(k1);
  k2=nextcompst(k2);
}
    cout<<"="<<sum;
    return 0;
    }
    
   