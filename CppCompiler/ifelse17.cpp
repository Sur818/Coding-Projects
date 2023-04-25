#include<iostream>
using namespace std;

int main()
{

int a,b,c,d;
cout<<"enter four distinct no";
cin>>a>>b>>c>>d;
if(a<b&&c<b&&d<b)
{
a=a+c+d-b;
cout<<a;
}
else if(a<c&&b<c&&d<c)
{
a=a+b+d-c;
cout<<a;
}
else if(a<d&&b<d&&c<d)
{
a=a+b+c-d;
cout<<a;
}
else
{
a=b+c+d-a;
cout<<a;
}
return 0;
}



    