package sampledata;
import java.util.*;
 class dsarray8 
 {
   public static void main(String [] ar)
   {
     Scanner sc=new Scanner (System.in);
    int i,j,n,k;
    String s;
    System.out.println("enter size of array");
    n=sc.nextInt();
    int a[]=new int[n];
 
    for(i=0;i<n;i++)
    {
      System.out.print("a["+i+"]=");
      a[i]=sc.nextInt();
    }
    sc.nextLine();
    
    System.out.print("enter no's want to delete");
    s=sc.nextLine();
  for(i=0;i<s.length();i=i+2)
  {
    char ch=s.charAt(i);
   int m=Character.getNumericValue(ch);
   for(j=0;j<n;j++)
   {
     if(a[j]==m)
     {
       for(k=j;k<n-1;k++)
       {
         a[k]=a[k+1];
       }
       j--;
       n--;
     }
   }
   
  }
  System.out.println("\nafter deleting element:----\n");
 print(a,n);
 }
 
 public static void print (int a[],int n)
 {
   int i;
   for(i=0;i<n;i++)
   {
     System.out.println(a[i]);
 
   }
 }   
  
}
