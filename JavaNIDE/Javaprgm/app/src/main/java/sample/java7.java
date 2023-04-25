package sample;
import java.util.*;
class java7
 {
   
   public static void main(String[] ar)
   {
     int arr[]=new int[100];
     int i,n;
     System.out.print("enter size of array");
     Scanner m=new Scanner (System.in);
     n=m.nextInt();
     for(i=0;i<n;i++)
     {
      System.out.print("arr["+i+"]=");
      arr[i]=m.nextInt();
     }
     for(i=0;i<n;i++)
     {
      System.out.println(arr[i]);
     }
   }
   }

