#include<iostream>
using namespace std;

int add(int *ptr1,int *ptr2)
{
return *ptr1+*ptr2;
}
int main()
{
  int a,b;
  a=10;
b=20;
cout<<add(&a,&b);

}

