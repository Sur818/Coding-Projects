#include<iostream>
using namespace std;
struct add
{
int a;
int b;
int sum;
};

struct add sumoftwono(struct add s)
{
cout<<"enter value of a-";
cin>>s.a;
cout<<"enter value of b-";
cin>>s.b;
s.sum=s.a+s.b;
return s;
}

int main()
{
struct add s;
s=sumoftwono(s);
cout<<"sum of two no:-"<<s.sum;
return 0;
}
