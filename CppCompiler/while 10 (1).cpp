#include<iostream>
using namespace std;

int main()
{
 int n1,i=1,sum=0,j,n,z;
cout<<"enter range:-";
cin>>n;
while (i++<=n)
{
z=i;
sum=0;
j=i;
while(j!=0)
{
n1=j%10;
sum=sum+n1*n1*n1;
j=j/10;
};
if(z==sum)
{
cout<<i<<endl;
}
};
return 0;
}
