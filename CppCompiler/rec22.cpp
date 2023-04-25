#include<iostream>
using namespace std;


int LCM(int a,int b)
{
static int m=0;
m=m+b;
if(m%a==0&&m%b==0)
return m;
return LCM(a,b);
}


int main()
{
 int a,b;
cout<<"enter two no";
cin>>a>>b;
cout<<LCM(a,b);

}