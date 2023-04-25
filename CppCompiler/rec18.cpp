#include<iostream>
using namespace std;


int Lcm(int a,int b,int i=2)
{
static int prod=1;
if(i<=a*b)
{
if(a%i==0&&b%i==0)
{
prod=prod*i;
return Lcm(a/i,b/i,i);
}
else if(a%i==0&&b%i!=0)
{
prod=prod*i;
return Lcm(a/i,b,i);
}
else if(a%i!=0&&b%i==0)
{
prod=prod*i;
return Lcm(a,b/i,i);
}
else
return Lcm(a,b,i+1);
}
else
return prod;
}



int main()
{
 int a,b;
cout<<"enter two no";
cin>>a>>b;
cout<<Lcm(a,b);

}