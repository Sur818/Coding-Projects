#include<iostream>
using namespace std;

int main()
{
int i,n;
cout<<"enter no";
cin>>n;
for(i=1;i<n;i++)
{
if(i%2==0)
{
cout<<i*(i+1)<<endl;
i++;
}
else
{
cout<<i<<endl;
}
}
return 0;
}