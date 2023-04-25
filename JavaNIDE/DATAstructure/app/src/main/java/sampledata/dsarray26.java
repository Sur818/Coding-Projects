package sampledata;
import java.util.*;
class dsarray26
 {
   static
{
  System.out.println("this prgm help to find subsequence of required size");
}
  public static void main(String[] ar)
  {
    int n,k,i;
    System.out.println("enter size of array");
    Scanner sc=new Scanner (System.in);
    n=sc.nextInt();
    int []a=new int[n];
    int []b=new int[n];
    int []s=new int[n];
    for(i=0;i<n;i++)
    {
      System.out.print("a["+i+"]=");
      a[i]=sc.nextInt();
    }
    System.out.println("enter size of subsequence");
    k=sc.nextInt();
    if(k<=a.length)
    {
    print_subsequence(a,0,s,0,k);
    }
    else
{
  System.out.println("not possible");
}
       
  }
  
  public static void print_subsequence(int a[],int c1i,int s[],int c2i,int k)
  {
   if(c1i>=a.length)
   {
     if(c2i==k)
     {
    print(s,c2i);
    }
    return ;
   }
    
print_subsequence(a,c1i+1,s,c2i,k);
s[c2i]=a[c1i];
print_subsequence(a,c1i+1,s,c2i+1,k);
}
    
    
  public static void print(int s[],int n)  
  {
    int i;
    System.out.print("{");
    for(i=0;i<n;i++)
    {
      System.out.print(s[i]+" ");
    }
    System.out.println("}");
  }
    
    
    
}
