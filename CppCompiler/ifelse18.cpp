#include<iostream>
using namespace std;

int main()
{

int a,b,c,d;
cout<<"enter four distinct no\n";
cin>>a>>b>>c>>d;
cout<<"result=";
if(a<b&&c<b&&d<b)
{
if(a<c&&d<c)
{
a=(c+b)-(a+d);
cout<<a;
}
else if(c<a&&d<a)
{
a=(a+b)-(d+c);
cout<<a;
}
else 
{
a=(b+d)-(a+c);
cout<<a;
}
}
else if(a<c&&b<c&&d<c)
{
if(a<d&&b<d)
{
a=(c+d)-(a+b);
cout<<a;
}
else if(a<b&&d<b)
{
a=(b+c)-(a+d);
cout<<a;
}
else
{
a=(a+c)-(b+d);
cout<<a;
}
}
else if(a<d&&b<d&&c<d)
{
if(a<b&&c<b)
{
a=(d+b)-(a+c);
cout<<a;
}
else if(b<a&&c<a)
{
a=(a+d)-(b+c);
cout<<a;
}
else
{
a=(c+d)-(a+b);
cout<<a;
}
}
else
{
if(b<c&&d<c)
{
a=(a+c)-(d+b);
cout<<a;
}
else if(c<b&&d<b)
{
a=(a+b)-(c+d);
cout<<a;
}
else
{
a=(a+d)-(b+c);
cout<<a;
}
}
return 0;
}



    