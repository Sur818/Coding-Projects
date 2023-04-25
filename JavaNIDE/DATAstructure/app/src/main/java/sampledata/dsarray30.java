
package sampledata;
import java.util.*;
 class dsarray30
 {
   static
{
  System.out.println("print increasing order(elements) of subarray whoose sum=0");
}
  public static void main(String [] ar)
  {
    
    int i,n,j,k,length=0;
    System.out.println("enter size of array:-");
    Scanner sc=new Scanner (System.in);
    n=sc.nextInt();
    int []a=new int[n];
    int []b=new int[n];
    for(i=0;i<n;i++)
    {
      System.out.print("a["+i+"]=");
      a[i]=sc.nextInt();
    }
    for(i=0;i<n;i++)
    {
      k=0;
      for(j=i;j<n;j++)
      {
        b[k++]=a[j];
         int sum=sum_array(b,k);
        if(sum==0&&k-1>=length)
        {
          length=Math.max(length,k-1);
          print(b,k);
        }
    
      }
    }
    
  }
  
  public static int sum_array(int b[],int n)
  {
    int i,sum=0;
    for(i=0;i<n;i++)
    {
      sum=sum+b[i];
    }
    return sum;
  }
  
  public static void print (int b[],int k)
  {
    int i;
    System.out.print("{");
    for(i=0;i<k;i++)
    {
      System.out.print(b[i]+" ");
    }
    System.out.println("}");
    
    
    
    
  }
  
  
  
}
