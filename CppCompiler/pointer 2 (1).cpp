#include<iostream>
using namespace std;

int main()
{
int n,n1,i,sum=0;
cout<<"enter no:-";
cin>>n;
int *p=&n;
for(i=0;*p!=0;i++)
{
n1=*p%10;
sum=sum*10+n1;
*p=*p/10;
}
cout<<sum;
return 0;
}
