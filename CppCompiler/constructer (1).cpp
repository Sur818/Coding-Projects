#include<iostream>
using namespace std;

class arrays
{
public:
int n;
int arr[10];
arrays(int size)
{
n=size;
arr[n];
}

int *getarray()
{
for(int i=0;i<n;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
}
return arr;
}
};

void display(arrays obj,int n)
{
int i;
cout<<"entered element in array:-";
for(i=0;i<obj.n;i++)
{
cout<<obj.arr[i]<<" ";
}
}

int main()
{
int n;
cout<<"enter size:-";
cin>>n;
arrays obj(n);
obj.getarray();
display(obj,n);
}

