#include<iostream>
using namespace std;

int rev(int n)
{
  static int sum;
  if(n==0)
return sum;
sum=sum*10+n%10;
rev(n/10);
}


int main()
{
cout<<rev(123);
}