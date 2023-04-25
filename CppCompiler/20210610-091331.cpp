#include<iostream>
using namespace std;

struct sum
{
int a[10];
int n;
int sum=0;
};

struct sum ofarr(struct sum s1)
{
int i;
cout<<"enter no of element in array:-";
cin>>s1.n;
cout<<"enter element in array:-\n";
for(i=0;i<s1.n;i++)
{
cout<<"a["<<i<<"]=";
cin>>s1.a[i];
s1.sum=s1.sum+s1.a[i];
}
return s1;
}

int main()
{
struct sum s1;
s1=ofarr(s1);
cout<<s1.sum;
return 0;
}
