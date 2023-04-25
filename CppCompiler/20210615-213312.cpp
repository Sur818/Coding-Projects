#include<iostream>
using namespace std;

int shortest_path(int *a1,int *a2,int n1,int n2)
{
int i=0,j=0,sum1=0,sum2=0,result=0;
while(i<n1&&j<n2)
{
if(a1[i]<a2[j])
{
sum1=sum1+a1[i++];
}
else if(a2[j]<a1[i])
{
sum2=sum2+a2[j++];
}
else
{
result=result+max(sum1,sum2);
sum1=0;
sum2=0;

       sum1 += a1[i++];
       sum2 += a2[j++];
   result += max(sum1, sum2);
    sum1 = 0, sum2 = 0;

}
}
while(i<n1)
{
sum1=sum1+a1[i++];
}
while (j<n2)
{
sum2=sum2+a2[j++];
}
result=result+max(sum1,sum2);
return result;
}




int main()
{
 int i,n1,n2;
cout<<"enter size:-";
cin>>n1;
int a1[n1];
int a2[n2];
cout<<"enter element in first array:-\n";
for(i=0;i<n1;i++)
{
cout<<"a1["<<i<<"]=";
cin>>a1[i];
}
cout<<"enter size:-";
cin>>n2;
cout<<"enter element in second array:-\n";
for(i=0;i<n2;i++)
{
cout<<"a2["<<i<<"]=";
cin>>a2[i];
}
sort(a1,a1+n1);
sort(a2,a2+n2);
cout<<shortest_path(a1,a2,n1,n2);
}

    