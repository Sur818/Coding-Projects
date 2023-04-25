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
int n,i,k=0,sum=0;
cout<<"enter range:-";
cin>>n;
while(k++<n)
{
sum=0;
i=1;
int z=reverse_no(k);
while(z!=0)
{
sum=sum+pow(z%10,i++);
z=z/10;
};
if(sum==k)
cout<<k<<endl;
};
return 0;
}
