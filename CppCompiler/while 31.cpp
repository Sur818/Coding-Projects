#include<iostream>
using namespace std;

int main()
{
 int num=1,temp,rem,sum,n;
cout<<"enter range:-";
cin>>n;
while(num<=n)
{
sum=0;
temp=num;
while(temp!=0)
{
rem=temp%10;
sum=sum+rem;
temp=temp/10;
}
if(num%sum==0)
{
cout<<num<<endl;
}
num++;
};
return 0;
}