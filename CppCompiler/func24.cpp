#include<iostream>
using namespace std;
void palindrm(int n)
{
int i,rev=0,z=n;
for(i=1;n!=0;i++)
{
int n1=n%10;
rev=rev*10+n1;
n=n/10;
}
if(rev==z)
{
cout<<"palindrome no";
}
else
{
cout<<"not palindrome";
}
}

int main()
{
int n;
cout<<"enter no";
cin>>n;
palindrm(n);
}