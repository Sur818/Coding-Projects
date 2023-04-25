#include<iostream>
using namespace std;

int main()
{
int i,n;
cout<<"enter range=";
cin>>n;
for(i=1;i<=n;i++)
{
if(i%2==0||i%5==0)
{
continue;
}
cout<<i<<endl;
}
return 0;
}