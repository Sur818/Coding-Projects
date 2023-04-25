#include<iostream>
using namespace std;
bool isprime(int n)
{
int flag=0,i;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
flag++;
break;
}
}
if(flag==0&&n!=1)
return true;
else
return false;
}


int main()
{
int n,i=1;
cout<<"enter no:-";
cin>>n;
while(i<=n/2)
{
if(n%i==0&&isprime(i))
{
cout<<i<<" ";
}
i++;
};
return 0;
} 