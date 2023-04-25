package sampledata;
import java.util.*;
 class dsarray24
 {
   static
{
  
System.out.print("print possible all subsequence whose sum=0\n");
}
   static void print_allsubsequence(int a[],int c1i,int s[],int c2i)
   {
     
 if(c1i>=a.length)
 {
   if(sum_subseq(s,c2i))
   {
   print_sub(s,c2i);
   }
   return ;
 }
  
  print_allsubsequence (a,c1i+1,s,c2i);   
s[c2i]=a[c1i];
     print_allsubsequence(a,c1i+1,s,c2i+1);  
   }
   
   static void print_sub(int s[],int n)
   {
    int i;
    for(i=0;i<n;i++)
    {
     System.out.print(s[i]+" ");
     
    }
    System.out.print("\n");
   }
  
  
public static void main(String [] ar)
{
 int n,i;
 System.out.println("enter size of array");
 Scanner sc=new Scanner (System.in);
 n=sc.nextInt();
int []a=new int[n];
int []s=new int[n];
 for(i=0;i<n;i++)
 {
   
  System.out.print("a["+i+"]=");
  a[i]=sc.nextInt();
  }
print_allsubsequence(a,0,s,0);
   
   
  
   
 }
 public static boolean sum_subseq(int s[],int n)
 {
   int i,sum=0;
   for(i=0;i<n;i++)
   {
     sum=sum+s[i];
   }
   if(sum==0)
   {
     return true;
   }
   else
   {
     return false;
   }
 }
 
 
}
