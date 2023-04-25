#include<iostream>
using namespace std;

int main()
{
 int n,i,m;
cout<<"enter no:-";
cin>>n;
int *p=&n;
for(i=1;i<=10 ;i++)
{
m=*p*i;
cout<<*p<<"*"<<i<<"="<<m<<endl;
}
return 0;
}