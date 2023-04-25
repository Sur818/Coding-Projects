#include<iostream>
using namespace std;
//void add(int ,int);
void add(int,int,int);


//void add(int a,int b)
//{
//cout<<a+b<<endl;
//}

void add(int a,int b,int c=0)
{
cout<<a+b+c<<endl;
}

int main ()
{
add(3,4);
return 0;
}