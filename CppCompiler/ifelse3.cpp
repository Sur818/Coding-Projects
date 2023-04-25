#include<iostream>
using namespace std;

int main()
{
int x,y;
cout<<"enter coordinates";
cin>>x>>y;
if(x>0&&y>0)
{
cout<<"first quadrant";
}
else if(x<0&&y<0)
{
cout<<"second quadrant";
}
else if(x>0&&y<0)
{
cout<<"3rd qudrant";
}
else
{
cout<<"4th quadrant";
}
return 0;
}