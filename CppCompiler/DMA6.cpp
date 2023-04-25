#include<iostream>
using namespace std;

int main()
{
int *p,i,n1,n2;
cout<<"enter size of array:-";
cin>>n1;
p=new int[n1];
for(i=0;i<n1;i++)
{
cout<<"*(p+"<<i<<")=";
cin>>*(p+i);
}
cout<<"enterd array:-\n";
for(i=0;i<n1;i++)
{
cout<<*(p+i)<<" ";
}
return 0;
}
 