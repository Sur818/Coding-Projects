#include<iostream>
using namespace std;
int factorial(int n)
{
int i=1,fact=1;
while(i<=n)
{
fact=fact*i;
i++;
}
return fact;
}

int main()
{
 int n,i,j,z,sum=0;
cout<<"enter no:-";
cin>>n;
z=n;
while(n!=0)
{
sum=sum+factorial(n%10);
n=n/10;
}
if(sum==z)
{
cout<<"strong no:-";
}
else
{
cout<<"not strong no:-";
}
return 0;
}

