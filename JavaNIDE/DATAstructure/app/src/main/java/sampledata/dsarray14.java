package sampledata;
import java.util.*;
 class dsarray14 
{

  public static void main(String [] ar)
  {
    int i,j,n,ans=0, prod=1,ind=0,ans1=0;
    System.out.println("enter size of array");
    Scanner m=new Scanner (System.in);
    n=m.nextInt();
    int a[]=new int[n];
    for(i=0;i<n;i++)
    {
     System.out.print("a["+i+"]=");
     a[i]=m.nextInt();
    }
    for(i=0;i<n;i++)
    {
      prod=1;
      for(j=i;j<n;j++)
      {
       prod=prod*a[j];  
       if(ans<prod&&(j-i+1)>ans1)
       {
         ind=i;
         ans1=Math.max(ans1,j-i+1);
       } 
       ans=Math.max(ans,prod);
      }
      
    }
    System.out.println("maximum product="+ans);
    print(a,ans,ind); 
  }
  public static void print(int a[],int ans1,int ind)
  {
    int i,k=0;
    for(i=ind;k++<ans1;i++)
    {
      System.out.print(a[i]+" ");
    }
  }
  
  
  
  
}
