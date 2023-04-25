#include<iostream>
using namespace std;

class electricitybill
{
public:
string name;
string customer_id;
double tax,unit,bill;
electricitybill(string name,string x)
{
this->name=name;
customer_id=x;
}
};



electricitybill calc(electricitybill b)
{
double amt;
if(b.unit>0&&b.unit<=100)
amt=b.unit*1;
else if(b.unit>100&&b.unit<=200)
amt=(200-b.unit)*2+100;
else if(b.unit>200&&b.unit<=300)
amt=((300-b.unit)*3)+100*1+100*2;
else
amt=(b.unit-300)*5+100*3+100*2+100;
b.tax=(amt*10)/100;
b.bill=amt+b.tax;
return b;
}

int main()
{
string s,id;
cout<<"enter customer name:-";
getline(cin,s);
cout<<"enter customer ID:-";
getline(cin,id);
electricitybill b(s,id);
cout<<"enter unit if bill consumed by customer:-";
cin>>b.unit;
b=calc(b);
cout<<"your electricity bill amount including tax:-";
cout<<b.bill<<endl;
cout<<"\n tax are:-"<<b.tax<<endl;
return 0;
}


