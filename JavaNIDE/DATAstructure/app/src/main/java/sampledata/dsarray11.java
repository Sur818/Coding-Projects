package sampledata;
import java.util.*;
 class dsarray11 
 {
   static
{
  
  System.out.print("all possible subarray who's sum =0\n");
}
  
  public static void main(String[] ar)
  {
    int i,j,k,n,sum=0;
    Scanner sc=new Scanner(System.in);
    System.out.print("enter size of array");
    n=sc.nextInt();
    int []a=new int[n];
    for(i=0;i<n;i++)
    {
      System.out.println("a["+i+"]=");
      a[i]=sc.nextInt();
      
    }
    for(i=0;i<n;i++)
    {
      sum=0;
      sum=sum+a[i];
      for(j=i+1;j<n;j++)
      {
        sum=sum+a[j];
        if(sum==0)
        {
          System.out.print("{");
          for(k=i;k<=j;k++)
          {
            System.out.print(a[k]+" ");
          }
          System.out.print("}\n");
        }
      }
    }
    
    
  }
}
