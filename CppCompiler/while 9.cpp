#include<iostream>
using namespace std;

int main()
{
 int n,n1,i=0,z=0;
cout<<"enter no:-";
cin>>n;
int rev[n];
while(n!=0)
{
n1=n%10;
rev[i++]=n1;
n=n/10;
z++;
};
cout<<"reverse of no=:-\n";
for(i=0;i<z;i++)
{
cout<<rev[i];
}
return 0;
}