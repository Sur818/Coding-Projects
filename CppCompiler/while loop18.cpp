#include<iostream>
using namespace std;

int main()
{
int i,n,j,sum;
cout<<"enter range:-";
cin>>n;
i=1;
while(i++<=n)
{
sum=0;
j=1;
while(j<=i/2)
{
if(i%j==0)
sum=sum+j;
j++;
}
if(sum==i)
cout<<i<<endl;
};
return 0;
}