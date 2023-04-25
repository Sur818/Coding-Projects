#include<iostream>
using namespace std;
 double sum=0;
//void m1(int ,int =0);
void sumd();



void m1(int a,int b=0)
{
if(b!=0)
{
cout<<"1/"<<a<<"+"<<b;
}
else
{
cout<<"1/"<<a;
}
sum=sum+(double)1/(a+b);
}



int main()
{
int i,n,j=0,k=0;
cout<<"enter range";
cin>>n;
for(i=1;i<=n;i++)
{
if(i%2==0)
{
m1(++j);
}
else
{
m1(++k,++k+1);
}
if(i<n)
{
cout<<" + ";
}
}
sumd();
}

void sumd()
{
cout<<"sum of seriese="<<sum;
}



