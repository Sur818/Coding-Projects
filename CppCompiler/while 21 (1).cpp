#include<iostream>
using namespace std;

int main()
{
 int i=1,j,n,sum,prod;
cout<<"enter range:-";
cin>>n;
while(i++<=n)
{
j=i;
sum=0;
prod=1;
while(j!=0)
{
sum=sum+(j%10);
prod=prod*(j%10);
j=j/10;
}
if(sum==prod)
cout<<i<<endl;
};
return 0;
}
