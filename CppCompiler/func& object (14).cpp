#include<iostream>
using namespace std;
class arrayss
{
public:
int n;
int arr[10];
arrayss(int n)
{
this->n=n;
}
void getsetter()
{
int i;
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>arr[i];
}
}
};

arrayss sum_array(arrayss obj,int trgt)
{
int i,j,sum,index1,index2,diff,ans=trgt;
for(i=0;i<obj.n;i++)
{
sum=0;
for(j=i;j<obj.n;j++)
{
sum=sum+obj.arr[j];
diff=abs(sum-trgt);
if(diff<ans)
{
index1=i;
index2=j;
}
ans=min(ans,diff);
}
}
cout<<"{";
for(i=index1;i<=index2;i++)
{
cout<<obj.arr[i]<<" ";
}
cout<<"}";
}

int main()
{
int n,trgt;
cout<<"enter size of array:-";
cin>>n;
arrayss obj(n);
obj.getsetter();
cout<<"enter target value:-";
cin>>trgt;
 sum_array(obj,trgt);
}





