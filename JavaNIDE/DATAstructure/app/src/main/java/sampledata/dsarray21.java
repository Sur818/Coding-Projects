package sampledata;
import java.util.*;
 class dsarray21 
 {
   static
{
  System.out.println("longest subarray who's sum =target value");
}
  public static void main(String[] ar)
  {
    int n,i,j,length=0,ind=0,sum,f=0,k;
    System.out.print("Enter size of array:-");
    Scanner sc=new Scanner (System.in);
   n=sc.nextInt();
   System.out.print("Enter target value:");
    k=sc.nextInt();
   int a[]=new int[n];
   for(i=0;i<n;i++)
   {
     System.out.print("a["+i+"]=");
     a[i]=sc.nextInt();
   }
    for(i=0;i<n;i++)
    {
      sum=0;
      for(j=i;j<n;j++)
      {
       sum=sum+a[j];
       if(sum==k)
       {
         f++;
        if(j-i+1>length)
        {
          ind=i;
          length=Math.max(length,j-i+1);
        }
       }
        
        
      }
    }
    if(f>0)
    {
    print(a,ind,length);
    }
    else
{
  System.out.println("no such subarray are found");
}
  }
  public static void print(int a[],int ind,int length)
  {
    int i,k=0;
    System.out.print("{");
    for(i=ind;k++<length;i++)
    {
      System.out.print(a[i]+" ");
    }
    System.out.println("}");
  }
  
}

