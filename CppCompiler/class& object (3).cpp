#include<iostream>
using namespace std;

class Armstrong
{
public:
int n,z,i;

Armstrong(int x)
{
n=x;
z=n;
}

bool check_Armstrong()
{
int i,n1,sum=0;
for(i=0;n!=0;i++)
{
n1=n%10;
sum=sum+n1*n1*n1;
n=n/10;
}
if(z==sum)
return true;
else
return false;
}
};

int main()
{
int n;
cout<<"enter no :-";
cin>>n;
Armstrong  obj(n);
if(obj.check_Armstrong())
{
cout<<"Armstrong no:-";
}
else
{
cout<<"not Armstrong no:-";
}
}
    