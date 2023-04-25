#include<iostream>
using namespace std;

int main()
{
 int i=1,n,rem,bin=0;
cout<<"enter no:-";
cin>>n;
while(n!=0)
{
rem=n%2;
n=n/2;
bin=bin+(i*rem);
i=i*10;
};
cout<<"binary of given no:-"<<bin<<endl;
return 0;
}
