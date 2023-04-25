#include<iostream>
using namespace std;
class abst
{
public:
int n;
abst(int n)
{
this->n=n;
}
abst(abst&obj)
{
n=obj.n+1;
}
void display ()
{
int i;
for(i=1;i<=10;i++)
{
cout<<n<<"*"<<i<<"="<<n*i<<endl;
}
}
};

int main()
{
cout<<"this program print table for initial position to final position:-";
int n,m,i;
cout<<"enter intial no:-";
cin>>n;
cout<<"enter final no:-";
cin>>m;
abst obj(n);
obj.display();
abst obj1=obj;
for(i=n;i<m;i++)
{
abst obj(i);
abst obj1=obj;
obj1.display();
cout<<"\n\n";
}
}


