#include<iostream>
using namespace std;

class car
{
private:
int mod_no;
public:
string car_name;
car(int x)
{
mod_no=x;
}
void showdetails()
{
cout<<"car name="<<car_name<<endl;
cout<<"mod_no="<<mod_no<<endl;
}
};

int main()
{
int n;
cout<<"Enter car model no:-";
cin>>n;
car obj(n);
cout<<"enter car name:-";
cin>>obj.car_name;
obj.showdetails();
}
