#include<iostream>
using namespace std;
int *arr_h(int n)
{
int i,a[n];
int *arr=a;
for(i=0;i<n;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
}
sort(arr,arr+n);
return arr;
}


int main()
{
 int n,i;
cout<<"enter size:-";
cin>>n;
int *p=arr_h(n);
cout<<"after sorting:-\n\n";
for(i=0;i<n;i++)
{
cout<<*(p+i)<<" ";
}
return 0;

}

