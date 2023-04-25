#include<iostream>
using namespace std;

int main()
{
  int i,n,flag=0;
cout<<"enter no:-";
cin>>n;
int *ptr=&n;
for(i=2;i<=*ptr/2;i++)
{
if(*ptr%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
cout<<"prime no:-";
}
else
{
cout<<"not prime no:-";
}
return 0;
}