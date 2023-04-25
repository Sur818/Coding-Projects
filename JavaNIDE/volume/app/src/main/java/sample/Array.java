package sample;
import java.util.*;

class Array
 {
  
  public static void main(String[] ar)
  {
    Scanner m=new Scanner(System.in);
 int arr[]=new int[10];
   int i;
   for(i=0;i<10;i++)
   {
     
    System.out.println("a["+i+"]:");
    arr[i]=m.nextInt();
    } 
   System.out.println("enterd array");
     
   for(i=0;i<10;i++)
   {
     System.out.println(arr[i]);
   }
   
  }
}
