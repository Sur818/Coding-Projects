#include<iostream>
using namespace std;

struct car
{
int car_id;
string car_name;
string model_no;
};

int main()
{
struct car *p;
struct car s;
p=&s;
cout<<"enter car_id:-";
cin>>p->car_id;
cout<<"enter car_name:-";
cin>>p->car_name;
cin.ignore();
cout<<"enter model no:-";
getline(cin,p->model_no);
cout<<"\n\n";
cout<<"entered car name:-";
cout<<p->car_name;

}

