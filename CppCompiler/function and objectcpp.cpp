#include<iostream>
using namespace std;
class bank
{
  public:
int balance,accno;
string name;
bank(int n,string s)
{
balance=n;
name=s;
accno=12345;
cout<<"your name="<<name<<endl;
cout<<"your balance="<<balance<<endl;
cout<<"your accno="<<accno<<endl;
}
};

void deposit(bank s1,int amt)
{
s1.balance=s1.balance+amt;
cout<<"your balance is="<<s1.balance;
}

void withdrawal(bank s2,int amt)
{
if(s2.balance<amt)
{
cout<<"amount limit exceeded:-";
}
else
{
s2.balance=s2.balance-amt;
cout<<"your balance ="<<s2.balance<<endl;
}
}

void check_balance(bank s)
{
cout<<"yor current balance="<<s.balance;
}

int main()
{
bank s(500,"Suraj");
int n;
cout<<"for balance check enter 1:-\n";
cout<<"for deposit enter 2:-\n";
cout<<"for withdrawal enter 3:-\n";
cin>>n;
switch (n)
{
case 1:
{
check_balance(s);
break;
}
case 2:
{
int amt;
cout<<"enter amount want to deposit:-\n";
cin>>amt;
deposit(s,amt);
break;
}

case3:
{
int amt;
cout<<"enter amount want to withdrawal:-\n";
cin>>amt;
withdrawal(s,amt);
break;
}
}
}


