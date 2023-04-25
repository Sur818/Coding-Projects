#include<iostream>
using namespace std;

int main()
{
 int i,a,b;
cout<<"enter two no";
cin>>a>>b;
for(i=2;i<=a*b;i++)
{
if(i%a==0&&i%b==0)
{
cout<<"LCM="<<i;
break;
}
}
return 0;
}
