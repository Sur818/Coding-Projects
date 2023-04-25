#include<iostream>
using namespace std;

class electricitybill
{
public:
string name;
string customer_id;
double tax,unit,bill;
};



electricitybill *calc(electricitybill b[],int n)
{
int i;
double amt;
for(i=0;i<n;i++)
{
cin.ignore();
cout<<"enter name:-";
getline(cin,b[i].name);
cout<<"enter customer id:-";
getline(cin,b[i].customer_id);
cout<<"enter consume unit:-";
cin>>b[i].unit;
if(b[i].unit>0&&b[i].unit<=100)
amt=b[i].unit*1;
else if(b[i].unit>100&&b[i].unit<=200)
amt=(200-b[i].unit)*2+100;
else if(b[i].unit>200&&b[i].unit<=300)
amt=((300-b[i].unit)*3)+100*1+100*2;
else
amt=(b[i].unit-300)*5+100*3+100*2+100;
b[i].tax=(amt*10)/100;
b[i].bill=amt+b[i].tax;
}
return b;
}

int main()
{
int n,i;
cout<<"no of connection:-";
cin>>n;
electricitybill *b=new electricitybill();
b=calc(b,n);
for(i=0;i<n;i++)
{
cout<<"name="<<b[i].name<<endl;
cout<<"id="<<b[i].customer_id<<endl;
cout<<"billing amount="<<b[i].bill<<endl;
cout<<"tax="<<b[i].tax<<endl;
cout<<"\n\n";
}
return 0;
}
