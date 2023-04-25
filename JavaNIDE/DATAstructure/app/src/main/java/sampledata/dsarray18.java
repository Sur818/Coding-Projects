package sampledata;
import java.util.*;
 class dsarray18 
 {
   static 
   {
     System.out.println("all subarray whoose all elements are different:-");
   }
   
 public static void main(String[] ar)
 {
   
   int n,i,j,k=0;
   System.out.println("enter size of array;");
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
      if(unique_subarray(b,k))
      {
        print(b,k);
        System.out.println("\n");
        
      }
     }
   }
   
   
 }
 public static boolean unique_subarray(int b[],int n)
  {
     
    int i,j,flag=0;
    for(i=0;i<n;i++)
    {
      
for(j=i+1;j<n;j++)
{
  if(b[i]==b[j])
  {
    flag++;
    return false;
  }
}   
    }
    if(flag==0)
    {
    return true;
    }
    else
{
  return false;
}
  }
  
  
  
 public static void print(int b[],int n)
  {
    int i;
    System.out.print("{");
    for(i=0;i<n;i++)
    {
      System.out.print(b[i]+" ");
    }
    System.out.print("}");
  }
  
  
  
}
