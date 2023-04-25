#include<iostream>
using namespace std;

struct add
{
int a;
int b;
};
int main()
{
int sum=0;
struct add *a;
for(int i=0;i<2;i++)
{
a->a=10;
a->b=20;
sum=sum+a->a+a->b;
}
cout<<sum;
}