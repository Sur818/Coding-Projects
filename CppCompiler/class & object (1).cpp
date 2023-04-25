#include<iostream>
using namespace std;

class  primeno
{
public:
int n,i;
bool check_prime(int n)
{
int flag=0;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
flag++;
}
if(flag==0)
return true;
else 
return false;
}
};
int main()
{
primeno obj;
cout<<"which no want to check:-";
cin>>obj.n;
if(obj.check_prime(obj.n))
{
cout<<"prime no:-";
}
else
{
cout<<"not prime no:-";
}
}

