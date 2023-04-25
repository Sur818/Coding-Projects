#include<iostream>
using namespace std;

int main()
{
 int i,n,rev=0,n1,j;
cout<<"enter range";
cin>>n;
for(i=1;i<=n;i++)
{
int z=i;
for(j=0;i!=0;j++)
{
n1=i%10;
rev=rev+n1*n1*n1;
i=i/10;
}
if(rev==z)
{
cout<<z<<endl;
}
rev=0;
i=z;
}
return 0;
}
