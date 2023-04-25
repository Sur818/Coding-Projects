#include<iostream>
using namespace std;

int main()
{
 int n1,sum=0,n,z;
cout<<"enter no:-";
cin>>n;
z=n;
while(n!=0)
{
n1=n%10;
sum=sum+n1*n1*n1;
n=n/10;
};
if(z==sum)
{
cout<<"Armstrong no:-";
}
else
{
cout<<"not Armstrong no:-";
}
return 0;
}
