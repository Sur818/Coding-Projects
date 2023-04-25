#include<iostream>
using namespace std;


int main()
{
    int n, k=2;
    float sum=0.5;
    
    cout << "Input N: ";
    cin >> n;
    cout << "\nSeries is:\n";
    int count, c, i=3;
     
      if(n>=2)
          printf("1/2");
        
      for(count = 2; count <= n; i++)  
      {

        for(c = 2; c < i; c++)
        {
            if(i%c == 0)
                break;
        }
        
        
        
        if(c == i)  
        {
            if(k<n)
               printf(" + ");
            sum += (float)k/i;
            printf("%d/%d", k, i);
            count++;  
            k++;
        }
    }
    
    cout << "\n\nSum is: " << sum;
    return 0;
}