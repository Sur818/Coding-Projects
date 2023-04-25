package sample;
import java.util.*;
 class ArrayList2
 {
   
   public static void main (String[] ar)
   {
     int i,n,x;
     System.out.print("enter size ");
     Scanner m=new Scanner (System.in);
     n=m.nextInt();
     ArrayList<Integer>l1=new ArrayList<>(n);
     for(i=0;i<n;i++)
     {
       System.out.print("a["+i+"]=");
       x=m.nextInt();
       l1.add(x);
     }
     
     for(i=0;i<n;i++)
     {
       System.out.println(l1.get(i));
     }
     
     
     
   }
   
   
  
}
