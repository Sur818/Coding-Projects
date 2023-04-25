#include<iostream>
using namespace std;

int main()
{
int a,b,c,d,e,sum;
cout<<"enter physics marks:-";
cin>>a;
cout<<"enter chemestry marks:-";
cin>>b;
cout<<"enter math marks:-";
cin>>c;
cout<<"enter English marks:-";
cin>>d;
 cout<<"enter hindi marks:-";
cin>>e;
sum=a+b+c+d+e;
double per=(double)sum/5;
cout<<"your percentage="<<per<<endl;
if(per>90)
{
cout<<"grade A";
}
else if(per>80&&per<80)
{
cout<<"grade B";
}
else if(per>70&&per<80)
{
cout<<"grade c";
}
else
{
cout<<"grade D";
}
return 0;
}