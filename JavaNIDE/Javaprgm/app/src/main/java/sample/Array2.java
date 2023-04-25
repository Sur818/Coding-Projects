package sample;
import java.util.*;
class Array2 
{
 public static void main (String[] ar)
 {
   int i,n,sum=0;
   System.out.println("enter size of array");
   Scanner m=new Scanner (System.in);
   n=m.nextInt();
   int []arr=new int[n];
   for(i=0;i<n;i++)
   {
     System.out.print("a["+i+"]=");
     arr[i]=m.nextInt();
   sum=sum+arr[i];
   }
   System.out.print("sum of ser="+sum);
   
 }
  
  
  
  
}
