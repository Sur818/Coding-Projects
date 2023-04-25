package sample;
import java.util.*;
 class Array10
 {
   
   public static void main (String[] ar)
   {
     int i,n;
     System.out.println("enter size of array");
     Scanner m=new Scanner(System.in);
     n=m.nextInt();
     int []a=new int[n];
     for(i=0;i<n;i++)
    {
      System.out.println("arr["+i+"]=");
      a[i]=m.nextInt();  
    }
    System.out.print("enter element=");
   n=m.nextInt();
   for(i=0;i<n;i++)
   {
     if(a[i]==n)
     {
      System.out.print("index of element="+i); 
       
     }
   }
  
     
     
     
     
   }
   
   
  
}
