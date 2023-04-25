#include<iostream>
using namespace std;

class overloading
{
public:
int date,month,year;
void input(int x,int y,int z)
{
date=x;
month=y:
year=z;
}
overloading operator +(overloading obj)
{
overloading temp;
temp.date=date+obj.temp;
temp.month=month+date.month;
temp.year=year+month.year;
return temp;
}
};

display(overloading obj)
{



    