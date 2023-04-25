#include<iostream>
using namespace std;

int main()
{
  int n,i,j,k=1;
cout<<"enter row:-";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
cout<<k++;
if(k<10)
{
cout<<"  ";
}
else
{
cout<<" ";
}
}
cout<<"\n";
}
return 0;
}

