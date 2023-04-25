#include<iostream>
using namespace std;

int main()
{
 int n,z,i=1,sq,count=0,sum=0,sum1=0;
cout<<"enter no:-";
cin>>n;
sq=n*n;
z=sq;
while(z!=0)
{
z=z/10;
count++;
};
while(i++<=count)
{
if(i<=count/2)
{
sum=sum*10+sq%10;
sq=sq/10;
}
else
{
sum1=sum1*10+sq%10;
sq=sq/10;
}
};
if(sum+sum1==n)
{
cout<<"krepar no:-";
}
else
{
cout<<"not krepar no:-";
}
return 0;
}


