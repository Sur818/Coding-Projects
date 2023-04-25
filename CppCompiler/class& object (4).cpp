#include<iostream>
using namespace std;

class Armstrong
{
public:
int n,z,i;

bool check_Armstrong(int n)
{
int i,sum=0,z=n;
for(i=0;n!=0;i++)
{
sum=sum+(n%10)*(n%10)*(n%10);
n=n/10;
}
if(z==sum)
return true;
else
return false;
}

void Range_Armstrong(int n)
{
for(i=1;i<=n;i++)
{
if(check_Armstrong(i))
{
cout<<i<<endl;
}
}
}
};

int main()
{
Armstrong  obj;
int n;
cout<<"enter range :-";
cin>>n;
obj.Range_Armstrong(n);

}
    