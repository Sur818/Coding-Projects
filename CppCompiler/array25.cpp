#include<iostream>
using namespace std;
void distinct(int [] ,int );
void equal(int [],int);
void complex(int [],int);

int i,j,k,D;
int main()
{
cout<<"this program determine a,b,c for nature of roots----->\n\n\n\n";
 int i,j,n;
cout<<"enter size:-";
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
distinct(a,n);
equal(a,n);
complex(a,n);
return 0;
}




void distinct(int a[],int n)
{
int check=0;
cout<<"a,b,c of eqn such that roots are real and distinct:-----\n\n";
for(i=0;i<n;i++)
{
for(j=0;j<n&&j!=i;j++)
{
for(k=0;j<n&&k!=j&&k!=i;k++)
{
D=a[i]*a[i]-4*a[j]*a[k];
if(D>0)
{
check++;
cout<<"{"<<a[j]<<","<<a[i]<<","<<a[k]<<"}";
cout<<"\n";
}
}
}
}
if(check==0)
{
cout<<"no such coffiecant are exist:---\n\n";
}
}
/*अब कोड को jada लम्बा मत समझो क्योंकि ध्यान से देखो
तो ऊपर वाला कोड (फंक्शन) 2 बार और रीपीट किया है
D=0 के लिए और D<0 के लिए----->*/
void equal(int a[] ,int n)
{
int check=0;
cout<<"\n\na,b,c of eqn such that roots are real and equal:------\n\n";
for(i=0;i<n;i++)
{
for(j=0;j<n&&j!=i;j++)
{
for(k=0;j<n&&k!=j&&k!=i;k++)
{
D=a[i]*a[i]-4*a[j]*a[k];
if(D==0)
{
check++;
cout<<"{"<<a[j]<<","<<a[i]<<","<<a[k]<<"}";
cout<<"\n";
}
}
}
}
if(check==0)
{
cout<<"no such coffiecant are exist:---\n\n";
}
}

void complex (int a[],int n)
{
int check=0;
cout<<"a,b,c of eqn such that root are complex:-----\n\n";
for(i=0;i<n;i++)
{
for(j=0;j<n&&j!=i;j++)
{
for(k=0;j<n&&k!=j&&k!=i;k++)
{
D=a[i]*a[i]-4*a[j]*a[k];
if(D<0)
{
check++;
cout<<"{"<<a[j]<<","<<a[i]<<","<<a[k]<<"}";
cout<<"\n";
}
}
}
}
if(check==0)
{
cout<<"no such coffiecant are exist:---";
}
}








    