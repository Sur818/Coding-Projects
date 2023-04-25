#include<iostream>
using namespace std;

class reverse_array
{
public:
int n,temp,i;
int a[10];
void input(int n)
{
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
}

int *reverse_a(int n)
{
for(i=0;i<n/2;i++)
{
temp=a[i];
a[i]=a[n-1-i];
a[n-1-i]=temp;
}
return a;
}
};

int main()
{
int n,i;
cout<<"enter size:-";
cin>>n;
reverse_array obj;
obj.input(n);
int *p=obj.reverse_a(n);
for(i=0;i<n;i++)
{
cout<<p[i]<<" ";
}
return 0;
}
 