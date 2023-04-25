#include<iostream>
using namespace std;
int sumofdigit(int n)
{
static int sum=0;
if(n>0)
{
sum=sum+n%10;
return sumofdigit(n/10);
}
else
return sum;
}


int noofdigit(int n)
{
static int count=0;
if(n>0)
{
count++;
return noofdigit(n/10);
}
else
return count;
}


int main()
{
int n;
cout<<"enter no";
cin>>n;
cout<<"sum of digits="<<sumofdigit(n)<<endl;
cout<<"no of digits="<<noofdigit(n);
}


