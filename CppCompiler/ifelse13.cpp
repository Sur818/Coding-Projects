#include<iostream>
using namespace std;

int main()
{
  int a,b,c;
cout <<"enter buy price";
cin>>a;
cout<<"enter selling price";
cin>>b;
c=b-a;
if(c>0)
{
cout<<"profit="<<c;
}
else
{
cout<<"loss="<<c;
}
return 0;
}

