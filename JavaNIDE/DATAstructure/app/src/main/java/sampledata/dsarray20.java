package sampledata;
import java.util.*;
 class dsarray20 
 {
  public static void main(String[] ar)
  {
    int n,i,j,k,sum;
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

         print(a,i,j);
         System.out.print("\n");
       }
        
        
      }
    }
    
    
  }
  public static void print(int a[],int ind1,int ind2)
  {
    int i;
    System.out.print("{");
    for(i=ind1;i<=ind2;i++)
    {
      System.out.print(a[i]+" ");
    }
    System.out.println("}");
  }
  
}
