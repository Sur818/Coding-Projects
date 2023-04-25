#include<iostream>
using namespace std;

int main()
{
   int n,i=1,temp;
cout<<"enter range:-";
cin>>n;
while(i<=n)
{
temp=i;
if(temp%10==7||temp%7==0)
cout<<i<<endl;
i++;
};
return 0;
}