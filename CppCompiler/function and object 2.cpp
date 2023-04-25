#include<iostream>
using namespace std;
class Array1
{
  public:
int size;
int arr[10];
Array1(int n)
{
size=n;
cout<<"enter element in array:-\n";
for(int i=0;i<n;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
}
}
};

void sumofarray(Array1 s)
{
int i,sum=0;
for(i=0;i<s.size;i++)
{
sum=sum+s.arr[i];
}
cout<<"sum of element of array="<<sum;
}

int main()
{
int n;
cout<<"enter size of array:-";
cin>>n;
Array1 obj(n);
sumofarray(obj);
}
