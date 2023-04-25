#include<iostream>
using namespace std;

int main()
{
 int f=0,num;
cout<<"enter no:-";
cin>>num;
int i=0;
while(i++<num)
{
if(num==i*(i+1))
{
f++;
break;
}
}
if(f!=0)
cout<<"pronic no:-";
else
cout<<"not pronic no:-";
return 0;
}
