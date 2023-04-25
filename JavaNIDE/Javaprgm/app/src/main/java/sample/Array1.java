package sample;
import java.util.*;
public class Array1
 {
   
 public static void main (String[] ar)
 {
   int i,n;
   System.out.println("enter size ofarray");
   Scanner m=new Scanner (System.in);
   n=m.nextInt();
   int []a=new int[n];
   for(i=0;i<n;i++)
   {
    System.out.print("a["+i+"]=");
    a[i]=m.nextInt();
   }
   for(i=0;i<n;i++)
   {
     System.out.println(a[i]);
   }
   
   
   
   
 }
  
}
