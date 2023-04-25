package sampledata;
import java.util.*;
 class dsarray25
 {
   static
{
  
System.out.print("print longest subsequence whose sum=0\n");
}
   static void print_allsubsequence(int a[],int b[],int c1i,int s[],int c2i,int length,int k)
   {
 if(c1i>=a.length)
 {
   if(sum_subseq(s,c2i)&&c2i>length)
   {
       length=Math.max(length,c2i);
       for(k=0;k<c2i;k++)
       {
         b[k]=s[k];
       }
       //print_longestsubs(b,k);
      System.out.println(length+" ");
       }  
   
   return ;
 }
 
  print_allsubsequence (a,b,c1i+1,s,c2i,length,k);   
   s[c2i]=a[c1i];
     print_allsubsequence(a,b,c1i+1,s,c2i+1,length,k); 
     
     
   }
   
   
   
   static void print_longestsubs(int s[],int n)
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
 int n,i,k=1;
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
print_allsubsequence(a,b,0,s,0,0,k);
   
   
  
   
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
