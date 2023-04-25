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

void printsmith_no(int num)
{
int sum=0,sum1=0,i=2;
sum=sumofdigits(num);
int temp=num;
while(num>1)
{
if(num%i==0&&isprime(i))
{
num=num/i;
sum1=sum1+sumofdigits(i);
}
else
{
i++;
}
};
if(sum==sum1)
{
cout<<temp<<endl;
}
}


int main()
{
int i,n;
cout<<"enter no:-";
cin>>n;
for(i=1;i<=n;i++)
{
printsmith_no(i);
}
return 0;
}
