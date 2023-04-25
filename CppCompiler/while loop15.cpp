#include<iostream>
using namespace std;

int main()
{
 int i=2,n1,n2,prod=1;
cout<<"enter two no:-";
cin>>n1>>n2;
while(n1!=1||n2!=1)
{
if(n1%i==0||n2%i==0)
{
if(n1%i==0)
n1=n1/i;
if(n2%i==0)
n2=n2/i;
prod=prod*i;
cout<<n1<<" "<<n2<<endl;
}
else
{
i++;
}
}
cout<<"LCM="<<prod<<endl;
return 0;
}

    