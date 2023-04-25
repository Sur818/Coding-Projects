#include<iostream>
using namespace std;

int main()
{
 int f=0,num,j;
cout<<"enter range:-";
cin>>num;
for(j=1;j<=num;j++)
{
int i=0;
f=0;
while(i++<j)
{
if(j==i*(i+1))
{
f++;
break;
}
}
if(f!=0)
cout<<j<<endl;
};
return 0;
}
