package sampledata;
import java.util.*;
 class dsarray23
 {
   static
   {
     System.out.print("set of all possible subsequences");
   }
  public static void main(String[] ar)
  {
    int n,i;
    System.out.print("\n\nEnter size of array:-");
    Scanner sc=new Scanner (System.in);
   n=sc.nextInt();
   int a[]=new int[n];
   int s[]=new int[n];
   for(i=0;i<n;i++)
   {
     System.out.print("a["+i+"]=");
     a[i]=sc.nextInt();
   }
    print_allsubsequence(a,0,s,0);
    }
    
    
    public static void print_allsubsequence(int a[],int c1i,int s[],int c2i)
    {
    if(c1i>=a.length)
    {
      print(s,c2i);
      return ;
     
    }
    print_allsubsequence(a,c1i+1,s,c2i);
    s[c2i]=a[c1i];
       print_allsubsequence(a,c1i+1,s,c2i+1);
      
      
    }
   
    
    public static void print(int s[],int n)
    {
      int i;
      for(i=0;i<n;i++)
      {
        System.out.print(s[i]+" ");
      }
      System.out.print("\n");
    }
 
}
