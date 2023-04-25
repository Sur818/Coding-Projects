#include<iostream>
using namespace std;

struct add
{
int a;
int b;
};
int main()
{
struct add sum;
sum.a=10;
sum.b=20;
cout<<sum.a+sum.b;
}