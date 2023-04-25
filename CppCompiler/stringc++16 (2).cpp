#include<iostream>
using namespace std;

int main()
{
  string s1,s2,s3;
cout<<"enter string1:-";
getline (cin,s1);
cout<<"enter string2:-";
getline (cin,s2);
int i,count,l1,l2,j;
l1=s1.length();
l2=s2.length();
if(l1<l2)
{
for(i=0;i<l2+1;i++)
{
count=0;
for(j=i+1;j<l2+1;j++)
{
count++;
s3=s2.substr(i,count);
if(s3.compare(s1)==0)
{
cout<<"string"<<s1<<"present in"<<s2;
}
}
}
}
else
{
for(i=0;i<l1+1;i++)
{
count=0;
for(j=i+1;j<l1+1;j++)
{
count++;
s3=s1.substr(i,count);
if(s3.compare(s2)==0)
{
cout<<"string "<<s2<<" present in "<<s1;
}
}
}
}

return 0;
}
