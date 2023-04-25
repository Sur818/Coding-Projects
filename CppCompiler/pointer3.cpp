#include<iostream>
using namespace std;

int main()
{
char s[10];
char *ptr=s;
int i;
for(i=0;i<5;i++)
{
cout<<"s["<<i<<"]=";
cin>>*(ptr+i);
}
for(i=0;i<5;i++)
{
cout<<*(ptr+i);
}
return 0;
}