#include<iostream>
using namespace std;

int main()
{
int n,i,f=0;
cout<<"enter range:-";
cin>>n;
int *p=&n;
for(i=2;i<=*p/2;i++)
{
if(*p%i==0)
{
f++;
cout<<"not prime";
break;
}
}
if(f==0)
{
cout<<"prime";
}
return 0;
}