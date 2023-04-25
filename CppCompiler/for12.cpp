#include<iostream>
using namespace std;

int main()
{
int i,n,n1,j,k=0;
int rev[100];
cout<<"enter any no to get rev";
cin>>n;
for(i=0;n!=0;i=i++)
{
n1=n%10;
if(n1==0)
{
rev[k++]=n1;
}
else
{
rev[k++]=n1;
}
n=n/10;
}
for(j=0;j<k;j++)
{
cout<<rev[j];
}
return 0;
}



