package sample;
import java.util.*;
class StringClass15 

{
 public static void main (String[] ar)
 {
   String s,s1,s2;
   System.out.println("enter the string");
   Scanner m=new Scanner(System.in);
   s=m.nextLine();
   System.out.println("enter the word");
   s1=m.nextLine();
   StringTokenizer z= new StringTokenizer(s," ");
   while(z.hasMoreTokens())
   {
    s2=z.nextToken();
   if(s2.equals(s1))
   {
     System.out.print("present");
   }
   System.out.println(s2);
   
   }
   
   
   
 }
  
}
