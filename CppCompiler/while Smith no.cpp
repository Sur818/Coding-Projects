#include<iostream>
using namespace std;
bool isprime(int n)
{
int i,flag=0;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
flag++;
return false;
break;
}
}
if(flag==0)
return true;
}


bool iscomposite(int n)
{
int i,f=0;
for(i=1;i<=n;i++)
{
if(n%i==0)
f++;
}
if(f>2)
return true;
else
return false;
}




int sumofdigits(int num)
{
int sum=0;
while(num!=0)
{
sum=sum+num%10;
num=num/10;
};
return sum;
}

int main()
{
int num,sum=0,sum1=0,i=2;
cout<<"enter num:-";
cin>>num;
if(iscomposite(num))
{
sum=sumofdigits(num);
cout<<sum<<endl;
while(num>1)
{
if(num%i==0&&isprime(i))
{
num=num/i;
sum1=sum1+sumofdigits(i);
cout<<i<<" ";
}
else
{
i++;
}
};
if(sum==sum1)
{
cout<<"Smith no:-";
}
else
{
cout<<"not Smith no:-";
}
}
else
{
cout<<"not Smith no:-";
}
return 0;
}