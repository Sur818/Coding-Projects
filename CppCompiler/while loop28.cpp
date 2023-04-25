#include<iostream>
using namespace std;
int binaryof(int n)
{
int i,bin=0,rem;
for(i=1;n!=0;i=i*10)
{
rem=n%2;
bin=bin+(i*rem);
n=n/2;
}
return bin;
}

int main()
{
   int n,freq=0;
cout<<"enter no:-";
cin>>n;
int z=binaryof(n);
while(z!=0)
{
if(z%10==1)
{
freq++;
}
z=z/10;
};
if(freq%2==0)
cout<<"Evil no:-";
else
cout<<"not Evil no:-";
return 0;
}
