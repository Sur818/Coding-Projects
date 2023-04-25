package sample;
import java.util.*;
 class Array14
 {
   public static void main (String[] ar)
   {
    int i,n,max,min;
     System.out.println("enter size of array");
     Scanner m=new Scanner(System.in);
     n=m.nextInt();
     int []a=new int[n+1];
     for(i=0;i<n;i++)
    {
      System.out.println("arr["+i+"]=");
      a[i]=m.nextInt();  
    }
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
      if(a[i]>max)
      {
        max=a[i];
      }
      else if(a[i]<min)
      {
        min=a[i];
      }

    }
   
     System.out.println("max element="+max);
     System.out.println("min element="+min);
   }
  
}
