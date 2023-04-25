#include<iostream>
using namespace std;

struct complex
{
int real;
int img;
};

int main()
{
int sum,a,b;
struct complex c2,c1;
cout<<"enter first complex no:-";
cin>>c1.real>>c1.img;
cout<<"enter second complex no:-";
cin>>c2.real>>c2.img;
a=c1.real+c2.real;
b=c2.img+c2.img;
sum=a+b;
cout<<"sum="<<a<<"+i"<<b;
}

