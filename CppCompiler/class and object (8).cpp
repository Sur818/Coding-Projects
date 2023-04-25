#include<iostream>
using namespace std;

class revers
{
public:
 int n;
revers(int x)
{
n=x;
}
};

int reverse_no(revers s)
{
int i,n1,rev=0;
for(i=0;s.n!=0;i++)
{
n1=s.n%10;
rev=rev*10+n1;
s.n=s.n/10;
}
return rev;
}

int main()
{
int x;
cout<<"enter no want to reverse:-\n";
cin>>x;
revers obj(x);
cout<<"reverse of no:-"<<reverse_no(obj);
}




