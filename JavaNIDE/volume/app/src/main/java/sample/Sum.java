package sample;
import java.util.*;

class Sum
 {
  public static void main(String arr)
  {
    int i,n,p=0;
    Scanner m=new Scanner(System.in);
    System.out.print("enter the no");
    n=m.nextInt();
    for(i=1;i<=n;i++)
    {
     System.out.print(i);
       if(i<n)
       {
         System.out.print("*");
         
       }
       p=p+i;
    }
    System.out.print("sum of n natural no is"+p);
    
  }
  
}
