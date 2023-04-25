package sampledata;
import java.util.*;
class dsarray36
 {
  public static void main(String[] ar)
  {
    
    int i,j,n,k;
    System.out.println("enter size:-");
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
      System.out.println("all possible permutations of subArray");
     print(b,k);
      all_permutations(b,k);  
       System.out.print("\n");
     }
   }
   
    
  }
  public static void print(int b[],int k)
  {
    int i;
    for(i=0;i<k;i++)
    {
      System.out.print(b[i]+" ");
    }
    System.out.println("\n");
  }
  
  .
  public static void all_permutations(int a[],int ci)
  {
    if(ci==a.length-1)
    {
      print(a,ci);  
    }
    
   for(int i=ci;i<a.length;i++)
   {
     swap(a,i,ci);
     all_permutations(a,ci+1);
     swap(a,i,ci);
   }
    
  }
  
}
