#include<iostream>
using namespace std;

class student
{
public:
int n;
int sub[10];

int setdata(int arr[])
{
int i;
for(i=0;i<n;i++)
{
sub[i]=arr[i];
}
}
};

void sum_marks(student s)
{
int i,sum=0;
for(i=0;i<s.n;i++)
{
sum=sum+s.sub[i];
}
cout<<"sum of marks="<<sum<<endl;
}

int main()
{
int i,n;
cout<<"enter size:-";
cin>>n;
int sub1[n];
student s;
s.n=n;
for(i=0;i<n;i++)
{
cout<<"sub1["<<i<<"]=";
cin>>sub1[i];
}
s.setdata(sub1);
sum_marks(s);
}









