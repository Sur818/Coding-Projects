#include<iostream>
using namespace std;

int main()
{
  int i=1,j,n,sq,flag;
cout<<"enter range:-";
cin>>n;
while(i++<=n)
{
sq=i*i;
j=i;
flag=0;
while(j>0)
{
if(j%10!=sq%10)
{
flag++;
break;
}
j=j/10;
sq=sq/10;
}
if(flag==0)
cout<<i<<endl;
}
return 0;
}