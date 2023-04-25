#include<iostream>
using namespace std;

int prime(int n,int i=2)
{
if(i<=n/2)
{
if(n%i==0)
{
return 0;
}
return prime(n,i+1);
}
}



int main()
{
int n;
cout<<"enter no";
cin>>n;
if(prime(n)!=0)
{
cout<<"prime no";
}
else
{
cout<<"not prime no";
}

}
    