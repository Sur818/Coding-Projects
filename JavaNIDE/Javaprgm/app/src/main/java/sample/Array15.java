package sample;
import java.util.*;
 class Array15
 {
   static
{
  
 System.out.println("this result show nth max or nth min element present in array");
}
   
   public static void main (String[] ar)
   {
     
     int i,n,pos1,pos2,max,min;
     System.out.println("enter size of array");
     Scanner m=new Scanner(System.in);
     n=m.nextInt();
     int []a=new int[n];
     for(i=0;i<n;i++)
    {
      System.out.println("arr["+i+"]=");
      a[i]=m.nextInt();  
    }
    max=a[0];
    min=a[0];
    Arrays.sort(a);
     //for(i=0;i<n;i++)
     //{
       //System.out.println(a[i]);
    // }
    System.out.println("enter posn for maxima");
     pos1=m.nextInt();
    System.out.println(pos1+"th max element in array="+a[n-pos1]);
    System.out.println("enter posn for minima");
    pos2=m.nextInt();
    System.out.print(pos2+"th min element present in array="+a[pos2-1]);
  
   }
   
   
  
}
