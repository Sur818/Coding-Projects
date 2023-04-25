#include<iostream>
using namespace std;

int odd(int n,int i=1)
{
if(i<=n)
{
if(i%2!=0)
{
cout<<i<<endl;
}
return odd(n,i+1);
}
else
return 0;
}


int even(int n,int i=1)
{
if(i<=n)
{
if(i%2==0)
{
cout<<i<<endl;
}
return even(n,i+1);
}
else
{
return 0;
}
}




int main()
{
int n;
cout<<"enter range";
cin>>n;
cout<<"all odd in given range="<<endl;
odd(n);
cout<<"all even in given range="<<endl;
even(n);
}

    