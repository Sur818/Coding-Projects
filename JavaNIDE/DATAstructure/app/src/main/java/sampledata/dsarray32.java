package sampledata;
import java.util.*;
 class dsarray32
 {
   static
{
  System.out.println("print longest prime possible order(elements) of subarray whoose sum=0");
}
  public static void main(String [] ar)
  {
    
    int i,n,j,k,length=0,ind=0;
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
        if(sum==0&&isallprime(b,k)&&k-1>=length)
        {
          ind=i;
          length=Math.max(length,k-1);
        }
    
      }
    }
    print(a,ind,length);
    
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
  
  public static void print (int a[],int ind,int length)
  {
    int i,k=0;
    System.out.print("{");
    for(i=ind;k++<=length;i++)
    {
      System.out.print(a[i]+" ");
    }
    System.out.println("}");
    
    
    
    
  }
  public static boolean isallprime(int b[],int n)
  {
    int i,j,f=0;
    for(i=0;i<n;i++)
    {
      for(j=2;j<=b[i]/2;j++)
      {
        if(b[i]%j==0)
        {
          f++;
          return false;
      
        }
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
