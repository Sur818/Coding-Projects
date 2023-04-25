#include<iostream>
using namespace std;

void *swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
cout<<*a<<" "<<*b;
}

int main()
{
int a,b;
cout<<"enter two no:-";
cin>>a>>b;
swap(&a,&b);
}
