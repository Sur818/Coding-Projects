#include<iostream>
using namespace std;

void display (int n)
{
cout<<n<<endl;
}


void display (float n)
{
cout<<n<<endl;
}

void display (int a,int b)
{
cout<<"a="<<a<<"\nb="<<b<<endl;
}
int main()
{
display(2);
display(23.54f);
display(2,5);
no
return 0;
}

