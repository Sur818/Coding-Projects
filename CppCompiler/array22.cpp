#include<iostream>
using namespace std;
void min_max(int [],int);

int main()
{
int i,n;
cout<<"enter  size:-";
cin>>n;
 int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
sort(a,a+n);
min_max(a,n);
return 0;
}


void min_max(int b[],int n)
{

cout<<"min distance between two no are:-"<<b[0]-b[1];
cout<<"min distance between two no are:-"<<b[0]-b[n-1];
}

