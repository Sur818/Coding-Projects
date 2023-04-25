#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
int *temp;
temp=a;
a=b;
b=temp;
cout<<*a<<" "<<*b;
}


int main()
{
  int a,b;
cout<<"enter two no respectively:-";
cin>>a>>b;
swap(&a,&b);
return 0;
}