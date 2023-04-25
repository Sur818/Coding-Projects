package sampledata;
import java.util.*;
 class dsarray29
 {
  public static void main(String [] ar)
  {
    
    int i,n,j,k,ans=0,ind=0;
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
      b[k++]=a[i];
      for(j=i+1;j<n;j++)
      {
        b[k++]=a[j];
         int sum=sum_array(b,k);
        if(sum==0)
        {
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
