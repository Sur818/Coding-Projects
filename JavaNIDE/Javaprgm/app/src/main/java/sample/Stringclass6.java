package sample;
import java.util.*;
class Stringclass6
 {
   public static void main (String[] ar)
   {
     
     String s,s1;
     System.out.println("enter userid");
     Scanner m=new Scanner (System.in);
     s=m.nextLine();
     System.out.println("enter password");
     s1=m.nextLine();

 if(s.equals("btps")&&s1.equals("1234"))
 {
   System.out.print("login suscess");
 }
 else
{
  System.out.print("not suscess");
}
   }
  
}
