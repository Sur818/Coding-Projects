#include<iostream>
using namespace std;
int binary(int*n)
{
int i,n1,bin=0;
for(i=1;*n!=0;i=i*10)
{
n1=*n%2;
bin=bin+n1*i;
*n=*n/2;
}
return bin;
}

int main()
{
int n;
cout<<"enter no-";
cin>>n;
cout<<"binary of entered no:-";
cout<<binary(&n);

return 0;

} 