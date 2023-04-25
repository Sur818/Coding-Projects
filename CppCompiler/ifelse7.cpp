#include<iostream>
using namespace std;

int main()
{
   int a,b,c;
cout<<"enter three no";
cin>>a>>b>>c;
if(a==b)
{
if(a==c)
{
cout<<"all equal";
}
else if(a>c)
{
cout<<"a=b is greatest";
}
else
{
cout<<"c greatest ";
}
}
else if(a==c)
{
if(a>b)
{
cout<<"a=c is greatest";
}
else
{
cout<<"b greatest ";
}
}
else if(b==c)
{
if(b>a)
{
cout<<"b=c is greatest";
}
else
{
cout<<"a greatest ";
}
}
else if(a>b)
{
if(a>c)
{
cout<<"a greatest";
}
else
{
cout<<"c greatest";
}
}
else if(b>a)
{
if(b>c)
{
cout<<"b greatest";
}
else
{
cout<<"c greatest";
}
}
else if(c>a)
{
if(c>b)
{
cout<<" c greatest";
}
else
{
cout<<" b greatest";
}
}

return 0;
}