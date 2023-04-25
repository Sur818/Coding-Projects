#include<iostream>
using namespace std;
int nextprime(int n)
{
int i=n+1,j,f;
while(i>n)
{
f=0;
for(j=2;j<=i/2;j++)
{
if(i%j==0)
{
f++;
}
}
if(f==0)
{
return i;
}
i++;
}
}

int previousprime(int n)
{
int i=n-1,j,f;
while(i<n)
{
f=0;
for(j=2;j<=i/2;j++)
{
if(i%j==0)
{
f++;
}
}
if(f==0)
{
return i;
}
i--;
};
}

int primefreq(int n,int k)
{
int i=n+1,j,f,count=0;
while(i>n)
{
f=0;
for(j=2;j<=i/2;j++)
{
if(i%j==0)
{
f++;
}
}
if(f==0&&++count==k)
{
return i;
}
i++;
};
}





int main()
{
int i,j,n,k;
cout<<"enter no of row:-";
cin>>n;
for(i=1;i<=n;i++)
{
k=2;
for(j=1;j<=i;j++)
{
cout<<k;
if(k<10)
{
cout<<"  ";
}
else
{
cout<<" ";
}
k=nextprime(k);
} 
for(j=1;j<=2*(n-i);j++)
{
cout<<"   ";
}
k=0;
k=primefreq(k,i+1);
for(j=1;j<=i;j++)
{
cout<<k;
if(k<10)
{
cout<<"  ";
}
else
{
cout<<" ";
}
k=previousprime(k);
} 
cout<<"\n";
}

return 0;
}