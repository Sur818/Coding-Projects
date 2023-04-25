
package sampledata;
import java.util.*;
 class dsarray33
 {
   static
{
  System.out.println("find max avg subarray of k length:-");
}
  public static void main(String [] ar)
  {
    
    int i,n,j,k,t=0,ind1=0,ans=0,avg=0;
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
    System.out.println("enter length:-");
    k=sc.nextInt();
    for(i=0;i<=n-k;i++)
    {
      t=0;
      for(j=i;j<k+i;j++)
      {
       b[t++]=a[j];
        }
          avg=sum_array(b,t)/(k);
        if(avg>ans)
        {
          ind1=i;
          ans=Math.max(ans,avg);
        }
    
      }
      //System.out.println(avg);
    print(a,ind1,k);
    
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
  
  public static void print (int a[],int ind1,int length)
  {
    int i,k=0;
    System.out.print("{");
    for(i=ind1;k++<length;i++)
    {
      System.out.print(a[i]+" ");
    }
    System.out.println("}");
    
    
    
    
  }
  
  
  
}
