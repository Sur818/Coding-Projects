#include<iostream>
#include<cmath>
using namespace std;

int factorial(int n)
{
int i,fact=1;
for(i=1;i<=n;i++)
{
fact=fact*i;
}
return fact;
}



int main ()
{
double i,n,sum=0;
cout<<"enter no";
cin>>n;
for(i=1;i<=n;i++)
{
cout<<i<<"/"<<i<<"-("<<i<<"/";
cout<<i<<"!+"<<(i+1)<<"!"<<")";
if(i<n)
{
cout<<"+";
}
int temp=factorial(i)+factorial(i+1);
sum=sum+(double)i/(i-(i/temp));
}
cout<<"sum of seriese="<<sum;
return 0;
}