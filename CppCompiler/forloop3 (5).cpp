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
double sum=0,n,k1=2,k2=4;
int i;
    cout<<"enter no of term:-";
    cin>>n;
    for(i=1;i<=n;i++)
    {
    if(i%2==0)
    {
    int temp=nextprime(k1);
    cout<<k1<<"/"<<temp;
    if(i<n)
    {
    cout<<"+";
    }
    sum=sum+(double)k1/(temp);
    k1=nextprime(temp);
}
else
{
int temp=nextcompst(k2);
cout<<k2<<"/"<<temp;
if(i<n)
{
cout<<"+";
}
sum=sum+(double)k2/(temp);
k2=nextcompst(temp);
}
}

    cout<<"="<<sum;
    return 0;
    }
    
   