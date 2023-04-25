package sample;
import java.util.*;
class pattern1 
{
 public static void main (String[] ar)
 {
   int i,j;
   String s;
  System.out.println("enter string");
  Scanner m=new Scanner (System.in);
  s=m.nextLine();
  for(i=0;i<s.length();i++)
  {
    
    for(j=0;j<=i;j++)
    {
      System.out.print(s.charAt(j));
    }
    System.out.print("\n");
  }
   
   
   
   
 }
  
}
