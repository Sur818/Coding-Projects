package sampledata;
import java.util.*;
class dsarray35
{
 
  public static void main(String[] ar)
  {
  int i,j,n,k,sum,f=0;
  System.out.print("enter size if array:-");
  Scanner m=new Scanner (System.in);
  n=m.nextInt();
  int []arr=new int[n];
  for(i=0;i<n;i++)
  {
    System.out.print("a["+i+"]=");
    arr[i]=m.nextInt();
    }
    System.out.println("enter requred length of subArray");
    k=m.nextInt();
    System.out.println("all possible subArray whose sum is prime");
    for(i=0;i<=n-k;i++)
    {
      sum=0;
      for(j=i;j<k+i;j++)
      {
        sum=sum+arr[j]; 
      }
      if(isprime(sum))
      {
        f++;
        print(arr,i,k);
      }
      }
      if(f==0)
      {
        System.out.println("no any subArray are exist");
      }
      }
      
      public static void print(int a[],int ind,int j)
      {
        
       int i,k=0;
       System.out.print("{");
       for(i=ind;k++<j;i++)
       {
         System.out.print(a[i]+" ");
       }
       System.out.println("}");
        
        
      }
      public static boolean isprime(int n)
      {
        int i,j,f=0;
        for(i=2;i<=n/2;i++)
        {
          if(n%i==0)
          {
            f=1;
            return false;
          }
        }
        if(f==0)
        {
          return true;
        }
        else
{
  return false;
}
      }
      }
      
      
      
    
  
    

