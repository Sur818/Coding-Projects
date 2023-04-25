#include<iostream>
using namespace std;




int add(int n,int b=0)
{
return n+b;
}



int main()
{
int a,b,sum=0,i=1;
do
{

if(i%2==0)
{
cout<<"enter no:-";
cin>>a;
if(a!=0)
{
sum=sum+i/add(a);
cout<<i<<"/"<<add(a);
cout<<"+";
}
}
else
{
cout<<"enter two no:-";
cin>>a>>b;
if(a!=0&&b!=0)
{
sum=sum+i/add(a,b);
cout<<i<<"/"<<add(a,b);
cout<<"+";
}
}
i++;
}while (a!=0&&b!=0);
cout<<"sum="<<sum;
}



    