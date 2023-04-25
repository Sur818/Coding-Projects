#include<iostream>
using namespace std;

int main()
{
int i,n,j,flag;
cout<<"enter range:-";
cin>>n;
i=1;
while(i++<n)
{
int j=2;
flag=0;
while (j<=i/2)
{
if(i%j==0)
{
flag++;
break;
}
j++;
}
if(flag==0)
{
cout<<i<<endl;
}
};
return 0;
}