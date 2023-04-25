#include<iostream>
using namespace std;

int fabo(int x)
{
if(x==2||x==1)
{
return 1;
}
return fabo(x-1)+fabo(x-2);
}

int main()
{
int n,num;
cout<<"enter no:-";
cin>>n;
for(int i=1;i<=n;i++)
{
cout<<fabo(i)<<" ";
}
}


    