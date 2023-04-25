package sample;
import java.util.*;
 class Arraylist3 
 {
   
   
  public static void main (String[] ar)
  {
    int i,n,x;
    System.out.print("enter size of arry");
    Scanner m=new Scanner (System.in);
    n=m.nextInt();
    ArrayList<Integer>l1=new ArrayList<>(n);
    for(i=0;i<n;i++)
    {
      System.out.print("a["+i+"]=");
      x=m.nextInt();
      l1.add(x);
    }
   // l1.remove(2);
    //n--;
   //System.out.println(l1.indexOf(3));
   //System.out.println(l1.lastIndexOf(3));
   l1.clear();
    for(i=0;i<n;i++)
  {
      System.out.println(l1.get(i));
    }
    
   
    
    
    
    
    
  }
  
}
