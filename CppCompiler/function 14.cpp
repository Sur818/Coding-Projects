#include<iostream>
using namespace std;

int fact(int n)
{
int i,f=1;
for(i=1;i<=n;i++)
{
f=f*i;
}
return f;
}


int main()
{
int  n,i;
double sum=0;
cout<<"enter range";
cin>>n;
for(i=1;i<=n;i++)
{
cout<<"1/"<<i<<"!";
if(i<n)
{
cout<<"+";
}
sum=sum+(1/(double)fact(i));
}
cout<<"\nsum of series="<<sum;
return 0;
}
