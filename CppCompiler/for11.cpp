#include<iostream>
using namespace std;

int main()
{
int i,n,n1,rev=0;
cout<<"enter any no to get rev";
cin>>n;
for(i=1;n!=0;i=i++)
{
n1=n%10;
rev=rev*10+n1;
n=n/10;
}
cout<<"reverse of no="<<rev;
return 0;
}



