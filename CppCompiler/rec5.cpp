#include<iostream>
using namespace std;

int no(int n)
{
static int sum=0;
if(n>0)
{
if(n%2==0)
return no(n-1);
cout<<n<<endl;
sum=sum+n;
return no(n-1);
}
else
{
return sum;
}
}


int main ()
{
int n;
cout<<"enter no";
cin>>n;
cout<<no(n);
}
