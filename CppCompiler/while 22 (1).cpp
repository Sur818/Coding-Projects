#include<iostream>
using namespace std;

int main()
{
  int i,n,sq,flag=0;
cout<<"enter no:-";
cin>>n;
sq=n*n;
while(n>0)
{
if(n%10!=sq%10)
{
flag++;
break;
}
n=n/10;
sq=sq/10;
};
if(flag==0)
cout<<"automorphic no:-";
else
cout<<"not automorphic no:-";
return 0;
}