#include<iostream>
using namespace std;

class Armstrongno 
{
public:
int n;
Armstrongno(int x)
{
n=x;
}
};

bool Armstrong_no(Armstrongno obj)
{
int i,sum=0,n1,z=obj.n;
for(i=0;z!=0;i++)
{
n1=z%10;
sum=sum+n1*n1*n1;
z=z/10;
}
if(sum==obj.n)
return true;
else
return false;
}


int main()
{
int n;
cout<<"enter no :-";
cin>>n;
Armstrongno obj(n);
if(Armstrong_no(obj))
{
cout<<"Armstrong no:-";
}
else
{
cout<<"not Armstrong no:-";
}
}

