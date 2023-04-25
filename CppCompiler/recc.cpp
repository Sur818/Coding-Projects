#include<iostream>
using namespace std;
int GCD(int a,int b)
{
if(b!=0)
return GCD(b,a%b);
else
return a;
}



int main()
{
int a,b;
cout<<"enter two no";
cin>>a>>b;
cout<<GCD(a,b);
}



