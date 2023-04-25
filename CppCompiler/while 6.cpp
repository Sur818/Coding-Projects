#include<iostream>
using namespace std;

int main()
{
int i,n,sum1=0,sum2=0;
cout<<"enter no:-";
cin>>n;
i=1;
while(i<=n)
{
if(i%2==0)
{
sum1=sum1+i;
}
else
{
sum2=sum2+i;
}
cout<<i<<endl;
i++;
}
cout<<"sum of odd no :-"<<sum2<<endl;
cout<<"sum of even no:-"<<sum1<<endl;
return 0;
}