#include<iostream>
using namespace std;

int add(int a)
{
return a;
}

int main()
{
int n,sum=0;
while (n!=0)
{
cout<<"enter no";
cin>>n;
sum=sum+add(n);
}
cout<<"total sum="<<sum;
return 0;
}
