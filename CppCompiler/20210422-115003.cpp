#include<iostream>
using namespace std;
void m1(int ,int );
void m1(float,float);

int main()
{
int a=10,b=10;
m1(10,10);
m1(10.5f,10.5f);
}


void m1(int a,int b)
{
cout<<"a+b="<<a+b<<endl;
}


void m1(float a,float b)
{
cout<<a+b<<endl;
}