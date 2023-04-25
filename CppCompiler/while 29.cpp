#include<iostream>
using namespace std;

int main()
{
 int z,n,i,dig=0,flag=0,rem;
cout<<"enter no:-";
cin>>n;
z=n;
while(z!=0)
{
z=z/10;
dig++;
};    
for(i=0;n!=0;i++)
{
rem=n%10;
n=n/10;
if(rem==0&&i==dig)
{
cout<<"not duck no:-";
break;
}
else
{
if(rem==0)
flag++;
}
}
if(flag!=0)
cout<<"duck no:-";
else
cout<<"not duck no:-";
return 0;
}
