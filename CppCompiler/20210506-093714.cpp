#include<iostream>
using namespace std;



int ser(int n,int i=1)
{
 int j=1,prod=1;
static int sum=0;
if(i<=n)
{
while(j<=i)
{
cout<<j++;
if(j<=i)
{
cout<<"*";
}
prod=prod*j;
}
sum=sum+prod;
prod=1;
if(i<n)
cout<<" + ";
return ser(n,i+1);
}
else
cout<<"=";
return sum;
}




int main()
{
int n;
cout<<"enter no";
cin>>n;
cout<<ser(n);
}


