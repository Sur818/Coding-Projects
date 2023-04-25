package sampledata;
import java.util.*;
 class dsarray16 
 {
   static
{
  
  System.out.println("all possible pelindrome subarray");
}
   public static void main(String[] ar)
   {
   int i,j,k,sum=0,n;
   System.out.println("enter size of array:-");
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
       if(ispalindrome(b,k))
       {
        
     print(b,k);
     System.out.println();
         
         
       }
       
     }
   }
   
   
     
     
     
     
   }
   
   public static boolean ispalindrome(int b[],int n)
   {
     
     int i;
     int []c=new int[n];
     for(i=0;i<n;i++)
     {
       c[n-i-1]=b[i];
     }
     if(isequal(b,c,n))
       {
         return true;
       }
       else
{
  return false;
}
   }
   public static boolean isequal(int b[],int c[] ,int n)
   {
     int f=0,i;
     for(i=0;i<n;i++)
     {
      if(b[i]!=c[i])
      {
        f=1;
        break;
      }
     }
     if(f==0)
     return true;
     else
return false;
}

   public static  void print(int b[],int n)
   {
     int i;
     for(i=0;i<n;i++)
     {
       System.out.print(b[i]+" ");
     }
   }
     
     
     
     
     
     
   }
  
  
