#include<iostream>
using namespace std;
int count=0;
void m1(int);
void m1(char);


int main()
{
int i,j=1;
char ch;
for(i=1;i<=5;i++)
{
if(i%2==0)
m1('$');
else
m1(j++);
}
}


void m1(int a)
{
int i;
for(i=1;i<=5;i++)
cout<<a;
cout<<endl;
}
void m1(char a)
{
int i;
for(i=1;i<=5;i++)
cout<<a;
cout<<endl;
}


