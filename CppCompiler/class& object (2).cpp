#include<iostream>
using namespace std;

class prime_underrange
{
public:
int n,i,j;
prime_underrange(int n)
{
this->n=n;
}

void prime_no()
{
int flag=0;
for(i=1;i<=n;i++)
{
flag=0;
for(j=2;j<=i/2;j++)
{
if(i%j==0)
{
flag++;
}
}
if(flag==0&&i!=1)
{
cout<<i<<" ";
}
}
}
};

int main()
{
int n;
cout<<"enter range:-";
cin>>n;
prime_underrange obj(n);
obj.prime_no();
}



