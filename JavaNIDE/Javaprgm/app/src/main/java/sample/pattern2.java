package sample;
import java.util.*;
public class pattern2 {
  
public static void main (String[] ar)
 {
   int i,j,n;
   String s;
  System.out.println("enter string");
  Scanner m=new Scanner (System.in);
  s=m.nextLine();
 char []a=s.toCharArray();
n=a.length;
  for(i=0;i<n;i++)
  {
    
    for(j=0;j<=i;j++)
    {
      System.out.print(a[n-1-j]);
    }
    System.out.print("\n");
  }
   
   
   
   
 }
  
}
