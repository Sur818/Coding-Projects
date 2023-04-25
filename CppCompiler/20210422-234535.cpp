#include<iostream>
using namespace std;
void m1(int);
void m1(char);

int main()
{
int i,j=1,n;
char ch;
cout<<"enter size";
cin>>n;
for(i=1;i<=n;i++)
{
if(i%2==0)
{
for(j=1;j<=i;j++)
if(j%2!=0)
{
m1('@');
}
else
{
m1('#');
}
cout<<endl;
}
else
{
for(j=1;j<=i;j++)
m1(j);
cout<<endl;
}
}
}


void m1(int a)
{
cout<<a;
}
void m1(char a)
{
cout<<a;
}


