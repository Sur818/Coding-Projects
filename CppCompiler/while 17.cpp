#include<iostream>
using namespace std;

int main()
{
int i,n,sum=0;
cout<<"enter no:-";
cin>>n;
i=1;
while(i<=n/2)
{
if(n%i==0)
sum=sum+i;
i++;
};
if(sum==n)
cout<<"perfect no:-";
else
cout<<"not perfect no:-";
return 0;
}