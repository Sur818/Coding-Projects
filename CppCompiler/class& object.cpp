#include<iostream>
using namespace std;
class  sumofelement
{
public:
int i,n;
int a[10];
sumofelement(int size)
{
n=size;
int a[n];
}

void input()
{
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
}

void sum()
{
int sum=0;
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
cout<<"sum of element of array:-"<<sum<<endl;
}
};

int main ()
{
int n;
cout<<"enter size:-";
cin>>n;
sumofelement obj(n);
obj.input();
obj.sum();
}


