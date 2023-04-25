package sampledata;
import java.util.*;
 class dsarray28
 {
  public static void main(String [] ar)
  {
    
    int i,n,j,k,ans=0,ind=0,sum;
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
        sum=sum_array(b,k);
        if(sum>ans)
        {
          ind=i;
          }
         ans=Math.max(ans,sum);   
      }
    }
    print(a,ind,ans);
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
  
  public static void print (int b[],int ind,int ans)
  {
    int i,sum=0;
    System.out.print("{");
    for(i=ind;sum<ans;i++)
    {
      sum=sum+b[i];
      System.out.print(b[i]+" ");
    }
    System.out.println("}");
    
    
    
    
  }
  
  
  
}
