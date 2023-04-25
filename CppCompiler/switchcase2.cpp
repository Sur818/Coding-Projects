#include<iostream>
using namespace std;

int main()
{
 int a,b;
char c;
//cout<<"enter first no:-";
cin>>a;
while (b!=0||c!='=')
{
//cout<<"enter operation:-";
cin>>c;
if(c=='=')
{
break;
}
//cout<<"enter  no";
cin>>b;
switch(c)
{
case '+':
{
int sum;
sum=a+b;
a=sum;
cout<<"="<<sum;
break;
}
case '*':
{
int prod;
prod=a*b;
a=prod;
cout<<"="<<prod;
break;
}
case '-':
{
int sub;
sub=a-b;
a=sub;
cout<<"="<<sub;
break;
}
case '/':
{
int div;
div=a/b;
a=div;
cout<<"="<<div;
break;
}
default :
{
cout<<"enter a valid operation:-";
break;
}
}
}
cout<<"result="<<a;
return 0;
}


    