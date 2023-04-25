#include<iostream>
using namespace std;

class bank
{
public:
int bal;
int accno;
string c_name;
bank(string s)
{
bal=0;
c_name=s;
accno=12345;
cout<<"customer name:-"<<c_name<<endl;
cout<<"account no:-"<<accno<<endl;
cout<<"intial balance=0"<<endl;
}

void showbalance()
{
cout<<"your current balance is="<<bal<<"\n\n";
}
void deposite(int amt)
{
bal=bal+amt;
showbalance();
}
void withdrawl(int amt)
{
bal=bal-amt;
showbalance();
}
};

int main()
{
string s;
cout<<"enter name:-";
getline(cin,s);
bank obj(s);
int n,amt;
do
{
cout<<"for showbalance enter 1:-"<<endl;
cout<<"for withdrawal enter 2:-"<<endl;
cout<<"for deposit enter 3:-"<<endl;
cout<<"for exit enter zero:-"<<endl;
cin>>n;
switch(n)
{
case 1:
{
obj.showbalance();
break;
}
case 2:
{
cout<<"enter amount:-";
cin>>amt;
if(amt<=obj.bal)
{
obj.withdrawl(amt);
}
else
{
cout<<"amount limit exceeded:-\n\n";
}
break;
}
case 3:
{
cout<<"enter amount:-";
cin>>amt;
obj.deposite(amt);
break;
}
default:
{
goto print;
}
cout<<"\n";
}
}while(n!=0);
print:
if(n!=0)
cout<<"enter valid operation:-\n";
return 0;
}





    