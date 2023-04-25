#include <iostream>
using namespace std;
 
// Function to find the sum of
// all subarrays of size k
int calcSum(int arr[],int n,int k)
{
    for (int i=0;i<=n-k;i++)
    {
        int sum=0;
        for (int j=i;j<k+i;j++)
            sum+=arr[j];

    cout<<sum<<" ";
   }
}

int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    calcSum(arr,n,k);
    return 0;
}