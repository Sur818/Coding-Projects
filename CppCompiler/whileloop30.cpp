#include<iostream>
using namespace std;

int main()
{
 int num,temp,rem,sum=0;
cout<<"enter no:-";
cin>>num;
temp=num;
while(temp!=0)
{
rem=temp%10;
sum=sum+rem;
temp=temp/10;
};
if(num%sum==0)
{
cout<<"Harshad no:-";
}
else
{
cout<<"not Harshad no:-";
}
return 0;
}