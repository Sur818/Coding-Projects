#include<iostream>
using namespace std;

int Discriminant(int [] ,int );
void abc(int [],int,int);

int main()
{
cout<<"this program find the value's of a,b,c such that discriminant of eqn becomes maximum------>\n\n\n\n";
 int i,j,n;
cout<<"enter size:-";
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
cout<<Discriminant(a,n);
return 0;
}




int Discriminant(int a[],int n)
{
int i,j,D=0,sum=0,k;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
for(k=0;k<n;k++)
{
if(i!=j&&j!=k&&k!=i)
sum=((a[i]*a[i])-(4*a[j]*a[k]));
D=max(D,sum);
}
}
}
abc(a,n,D);
return D;
}

void abc(int a[] ,int n,int D)
{
int i,j,k,temp;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
for(k=0;k<n;k++)
{
if(i!=j&&j!=k&&k!=i)
{
 temp=((a[i]*a[i])-(4*a[j]*a[k]));
if(temp==D)
{
cout<<"{"<<a[j]<<" "<<a[i]<<" "<<a[k]<<"}"<<endl;
}
}
}
}
}
}







    