#include<iostream>
using namespace std;

class abc
{
public:
int n;
int a[10];
abc(int size)
{
n=size;
a[n];
}

int *input()
{
for(int i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
return a;
}
};

int main()
{
int n,*p,i;
cout<<"enter size:-";
cin>>n;
abc obj(n);
p=obj.input();
cout<<"enterd array are:-\n";
for(i=0;i<n;i++)
{
cout<<p[i]<<endl;
}
return 0;
}





    