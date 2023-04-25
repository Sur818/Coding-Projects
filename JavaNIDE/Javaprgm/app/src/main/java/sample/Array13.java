package sample;
import java.util.*;
 class Array13 
 {
   public static void main (String[] ar)
   {
     
   int i,n,temp;
     System.out.println("enter size of array");
     Scanner m=new Scanner(System.in);
     n=m.nextInt();
     int []a=new int[n];
     for(i=0;i<n;i++)
    {
      System.out.println("arr["+i+"]=");
      a[i]=m.nextInt();  
    }
   
   for(i=0;i<n/2;i++)
   {
     temp=a[i];
     a[i]=a[n-1-i];
     a[n-1-i]=temp;
     
   }
   for(i=0;i<n;i++)
   {
     System.out.println(a[i]);
   }
  } 
  
}
