#include<iostream>
using namespace std;
class subject
{
public:
int n;
int sub[10];
};

subject setvalue(subject s)
{
for(int i=0;i<s.n;i++)
{
cout<<"sub["<<i<<"]=";
cin>>s.sub[i];
}
return s;
}


void getvalue(subject s)
{
int i,sum=0;
for(i=0;i<s.n;i++)
{
sum=sum+s.sub[i];
}
cout<<"sum of element in array:"<<sum;
}

int main()
{
int n;
subject s;
cout<<"enter size of array:-\n";
cin>>s.n;
s=setvalue(s);
getvalue (s);
}
