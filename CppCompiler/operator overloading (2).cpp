#include<iostream>
using namespace std;

class ans
{
public:
int n;
void operator++()
{
cout<<++n;
}
};

int main()
{
ans obj;
obj.n=5;
++obj;
}

