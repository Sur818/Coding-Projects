package sample;
import java.util.*;
 class ArrayList5
 {
  
  public static void main (String[] ar)
  {
    int i,j,n;
    String x;
    System.out.print("enter size of arry");
    Scanner m=new Scanner(System.in);
    n=m.nextInt();
   ArrayList <String>l1=new ArrayList<>(n);
   for(i=0;i<n;i++)
   {
     System.out.println("a["+i+"]=");
      x=m.nextLine();
       l1.add(x);  
   }
   System.out.print("which word want to delete");
   String s=m.nextLine();
   l1.remove(s);
    for(i=0;i<n;i++)
 {
   System.out.println(l1.get(i));
   
 }
    
    
    
    
  }
  
}
