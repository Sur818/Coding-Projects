#include<iostream>
using namespace std;
void submarix(int a[3][4],int n,int m)
{
    int i,j,k1=0,k2=0;
    for(i=n; k1++<2; i++)
    {
        k2=0;
        cout<<"[";
        for(j=m; k2++<2; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"]";
        cout<<"\n";
    }
    cout<<"\n\n";
}





int main()
{
    int i,j;
    int a[3][4];
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>*(*(a+i)+j);
        }
    }


    for(i=0; i<3; i++)
    {
        cout<<"[";
        for(j=0; j<4; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"]";
        cout<<"\n";
    }


    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            submarix(a,i,j);
        }
    }
    return 0;
}

