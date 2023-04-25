#include<iostream>
using namespace std;

int main()
{
 int a,b,c;
cout<<"enter two no"<<endl;
cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;
cout<<"c=";
cin>>c;
if(a==b&&a==c)
{
a=a+b+c;
cout<<a;
}
 else if(a<c&&b<c)
{
a=a+b-c;
cout<<a;
}
else if(c<b&&a<b)
{
a=a+c-b;
cout<<a;
}
else if(b<a&&c<a)
{
a=b+c-a;
cout<<a;
}
return 0;
}

