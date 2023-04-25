#include<iostream>
#include<math.h>
using namespace std;
int reverse_no(int n)
{
int rev=0;
while(n!=0)
{
rev=rev*10+n%10;
n=n/10;
};
return rev;
}

int main()
{
int n,i=1,sum=0;
cout<<"enter no:-";
cin>>n;
int z=reverse_no(n);
while(z!=0)
{
sum=sum+pow(z%10,i++);
z=z/10;
};
if(sum==n)
cout<<"disarum no:-";
else
cout<<"not disarum no:-";
return 0;
}
