#include<iostream>
using namespace std;

int main()
{
int i,n, flag=0;
cout<<"enter no:-";
cin>>n;
i=2;
while(i<=n/2)
{
if(n%i==0)
{
flag++;
break;
}
i++;
};
if(flag==0)
{
cout<<"prime no:-";
}
else
{
cout<<"not prime no:-";
}
}