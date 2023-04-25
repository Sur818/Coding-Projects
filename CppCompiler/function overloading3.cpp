#include<iostream>
using namespace std;
void display (int);
int main()
{
int x=10;
 display(x);
}


void display(int n)
{
cout<<"passing no="<<n;
}
/*due to prototype declaration we call function before any function creation*/