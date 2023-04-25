#include<iostream>
using namespace std;

class Hostel
{
string hostel_name;
int no_room;
int room_no[10];
int room_rent[10];
string starting_date[10];
string billing_date[10];
int amount[10];
int late_payment[10];
};



int amount_date(string s1,string s2)
{

int i,count=0,k=0,day=0,month=0,year=0;
string s;
s1=s1+" ";
s2=s2+" ";
for(i=0;i<s1.length();i++)
{
count++;
if(s1[i]=="_"||"/"||" ")
{
s=s1.substr(k,count-1);
if(k==0)
day=day+stoi(s);
else if(k==3)
month=month+stoi(s)
else
year=year+stoi(s);
k=i+1;
count=0;
}
}
k=0;
count=0;
for(i=0;i<s2.length();i++)
{
count++;
if(s1[i]=="_"||"/"||" ")
{
s=s2.substr(k,count-1);
if(k==0)
{
day=day-stoi(s);
day=abs(day);
}
else if(k==3)
{
month=month-stoi(s)
month=abs(month);
}
else
{
year=year-stoi(s);
year=abs(year);
}
k=i+1;
count=0;
}
}





Hostel *getdetails(Hostel h)
{
int i,amt;
cout<<"enter hostel_name:-";
getline(cin,h.hostel_name);
cout<<"enter no of room are in hostel:-";
cin>>h.no_room;
for(i=0;i<h.no_room;i++)
{
cout<<"enter room no:-"; 
cin>>h.room_no[i]; se
cout<<"enter room rent per month:-";
cin>>h.room_rent[i];
cout<<"enter starting date:-";
getline(cin,h.staring_date[i]);
cout<<"billing date:-"; 
getline(cin.h.billing_date[i]);
amt=amount_date(h.starting_date[i],h.starting_date);




    